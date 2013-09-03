/*
 * - XMLFactory.java -
 *
 * Copyright (c) 2011-2012 Marcel van den Boer
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to
 * deal in the Software without restriction, including without limitation the
 * rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
 * sell copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
 * IN THE SOFTWARE.
 */

package org.lfscript.factory2;

/* FIXME: This class should not do the I/O */
import java.io.IOException;
import java.io.File;
import java.io.OutputStream;
import java.io.FileOutputStream;

import nl.marcelweb.util.Pair;

import java.util.List;
import java.util.ArrayList;
import java.util.Map;
import java.util.Set;
import java.util.HashSet;
import java.util.HashMap;
import java.util.Collections;

public abstract class XMLFactory {
    protected final String book;

    private final Map<String, String> entities;
    private final Map<String, Script> scripts;

    private final Set<String> blackList = this.getBlackList();

    public Map<String, String> getEntities() {
        return Collections.unmodifiableMap(this.entities);
    }

    /**
     * Returns a set of names for XML files in LFS, which contain commands but
     * should not be included in 'buildbase.lfs'.
     */
    private Set<String> getBlackList() {
        final Set<String> blackList = new HashSet<String>();

        this.configureBlacklist(blackList);

        return Collections.unmodifiableSet(blackList);
    }

    public abstract void configureBlacklist(final Set<String> blacklist);

    public XMLFactory(final String book, final String revision) {
        this.book = book;

        this.scripts = new HashMap<String, Script>();
        this.entities = new HashMap<String, String>();

        this.entities.put("&scriptfactory-rev;", revision);
    }

    public void buildAll(final String target, final boolean withHeader)
            throws IOException {

        /* Recursively load instructions and scripts */
        final String indexFile = this.book + "index.xml";
        final String indexXml = SemiXML.loadXml(indexFile);
        this.getScripts(indexFile, indexXml);

        /* Save scripts */
        final Set<String> scriptKeys = this.scripts.keySet();
        for (final String script : scriptKeys) {
            final String output = this.scripts.get(script).getType4BScript(
                    withHeader, this.getEntities(),
                    this instanceof BLFSFactory);

            final OutputStream o = new FileOutputStream(target + "/" + script);
            o.write(output.getBytes());
            o.close();
        }
    }

    /**
     * Recursively loads all interconnected XML files.
     */
    private void getScripts(final String path, final String xml)
            throws IOException {

        this.entities.putAll(SemiXML.getEntitiesFrom(path, xml, this.entities));

        /*
         * Extract relevant instructions from the XML file and then determine
         * if they describe a software package...
         */
        if (this.parseXML(path, xml) == null) {

            /*
             * ... If not, then load any references to other XML files and
             * recursively load them.
             */
            final List<String> includes = SemiXML.innerParameter(xml,
                    "xi:include", "href");

            processXMLfiles:
            for (final String include : includes) {
                final String incPath = SemiXML.dirOf(path) + include;

                /* Do not load XML files that are blacklisted. */
                for (final String blackListed : this.blackList) {
                    if (incPath.endsWith(blackListed)) {
                        continue processXMLfiles;
                    }
                }

                this.getScripts(incPath, SemiXML.loadXml(incPath));
            }
        }
    }

    protected Script parseXML(final String pack, final String xml)
            throws IOException {
        final List<Pair<String, String>> install = SemiXML.innerXML(
                xml, "sect2", " role=\"installation\"");

        if (install.size() == 0) {
            return null;
        } else if (install.size() > 1) {
            System.err.println("WARNING: Multiple installation sections in '"
                + pack + "'");
        }

        /* Derive a package name from the xml filename */
        final String name = pack.substring(pack.lastIndexOf('/') + 1)
                .replace("-pass2.xml", "")
                .replace("-pass1.xml", "")
                .replace(".xml", "");

        /* Select or create a script for this package */
        final Script script;
        if (this.scripts.get(name) == null) {
            script = new Script(name);
            this.scripts.put(name, script);
        } else {
            script = this.scripts.get(name);
        }

        /* Add compilation/installation instructions */
        for (final Pair<String, String> section : install) {
            this.parseBuild(pack, section.getA(), script);
        }

        /* Add configuration instructions */
        final List<Pair<String, String>> configuration = SemiXML.innerXML(
                xml, "sect2", " role=\"configuration\"");

        if (configuration.size() > 1) {
            System.err.println("WARNING: Multiple configuration sections in '"
                + pack + "'");
        }

        for (final Pair<String, String> sect : configuration) {
            final List<Pair<String, String>> commands
                    = SemiXML.innerXML(sect.getA(), "userinput");

            for (final Pair<String, String> command : commands) {
                script.putPostInstallation(
                        SemiXML.asText(command.getA(), this.entities), false);
            }
        }

        /*
         * Loads any extra installation commands from an external source.
         */
        if ((new File("mods/" + script.getName() + "-install")).exists()) {
            System.err.println("INFO: Loading external install commands for '"
                    + script.getName() + "'");

            script.putInstallation(SemiXML.loadAscii("mods/"
                    + script.getName() + "-install").trim());
        }

        /*
         * Loads any extra post installation commands from an external source.
         */
        if ((new File("mods/" + script.getName() + "-postinst")).exists()) {
            System.err.println("INFO: Loading external postinst commands for '"
                    + script.getName() + "'");

            script.putPostInstallation(SemiXML.loadAscii("mods/"
                    + script.getName() + "-postinst").trim(), true);
        }

        return script;
    }

    protected abstract void parseBuild(String path, String section,
            Script script);

    public static void main(final String... args) {
        try {
            final boolean withHeader;
            if (args.length > 4) {
                withHeader = args[4].equals("header");
            } else {
                withHeader = false;
            }

            final XMLFactory factory;
            if (args[0].equals("lfs")) {
                factory = new LFSFactory(args[1] + "/BOOK/", args[3]);
                factory.buildAll(args[2], withHeader);
            } else {
                final WikiFactory wiki
                        = new WikiFactory(args[1] + "/../../wiki.xml");

                factory = new BLFSFactory(args[1] + "/BOOK/", args[3]);
                factory.buildAll(args[2], withHeader);

                wiki.saveAll(args[2]);
            }
        } catch (final IOException e) {
            throw new RuntimeException(e);
        }
    }
}

