/*
 * - Script.java -
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

import java.util.Collection;
import java.util.List;
import java.util.ArrayList;
import java.util.Set;
import java.util.HashSet;
import java.util.TreeSet;
import java.util.Map;
import java.util.HashMap;
import java.util.Collections;

/**
 * An instance of this class passively collects the various commands and
 * information belonging to a single software package.
 * <p>
 * After the host has finished configuring this object, it can return a
 * formatted representation of the data (the actual script output).
 */
public class Script {

    /*
     * The name of this script. It's primary function is to allow the
     * 'fakeroot' method to decide which rules to apply.
     */
    private final String name;

    /*
     * Keeps track of script flags.
     */
    private boolean delayPostInst;
    private boolean multibuild;

    /**
     * Constructs a new <code>Script</code> instance.
     */
    public Script(final String name) {
        this.name = name;

        this.delayPostInst = false;
        this.multibuild = false;

        /* FIXME */
               if (this.name.equals("libXau"))   { this.addDependency("pkgconfig"); /* required per instructions */
        } else if (this.name.equals("glib2"))    { this.addDependency("pcre"); /* required per instructions */
        } else if (this.name.equals("libdrm"))   { this.addDependency("xorg7-lib"); /* required per instructions */
        } else if (this.name.equals("x7driver")) { this.addDependency("libdrm"); /* required per instructions */
        } else if (this.name.equals("libXdmcp")) { this.addDependency("pkgconfig"); /* required per instructions */
        } else if (this.name.equals("talloc"))   { this.addDependency("python"); /* required per instructions */
        } else if (this.name.equals("x7app"))    { this.addDependency("mesalib"); /* required per instructions */
        } else if (this.name.equals("wget"))     { this.addDependency("openssl"); /* required per instructions */
        } else if (this.name.equals("gvfs"))     { this.addDependency("pkgconfig"); /* required per instructions */

        } else if (this.name.equals("gnutls")) { this.addDependency("libtasn1"); /* Otherwise, will install own version in stead */

        } else if (this.name.equals("networkmanager")) { this.addDependency("dhcpcd"); /* NM can not use DHCP otherwise */

        } else if (this.name.equals("upower")) { this.addDependency("libusb"); /* required per instructions - The 'libusb' dependency used to be installed for 'udev-rebuild'. */

        } else if (this.name.equals("consolekit")) { this.addDependency("polkit"); /* security */
        } else if (this.name.equals("nss")) { this.addDependency("sqlite"); /* compatibility */

        } else if (this.name.equals("gobject-introspection")) { this.addDependency("pkgconfig"); /* required per instructions */

        } else if (this.name.equals("gconf")) {
            this.addDependency("dbus-glib"); /* required per instructions */
            this.addDependency("gtk+2"); /* forgot why */

        } else if (this.name.equals("gdk-pixbuf")) {
            this.addDependency("libtiff"); /* required per instructions */
            this.addDependency("libjpeg"); /* required per instructions */
            this.addDependency("libpng"); /* required per instructions */
            this.addDependency("gobject-introspection"); /* avoids compilation order problems */

        } else if (this.name.equals("atk")) { this.addDependency("gobject-introspection"); /* avoids compilation order problems */
        } else if (this.name.equals("pango")) { this.addDependency("gobject-introspection"); /* avoids compilation order problems */

        } else if (this.name.equals("gnome-doc-utils")) { this.addDependency("rarian"); /* required per instructions */
        } else if (this.name.equals("sqlite"))          { this.addDependency("unzip"); /* required to extract source code */

        } else if (this.name.equals("rarian"))    { this.addDependency("docbook"); /* Otherwise will get XML from internet, which fails */

        } else if (this.name.equals("cairo"))           { this.addDependency("x-window-system"); /* required to build GTK+2 */
        } else if (this.name.equals("libcanberra"))     { this.addDependency("mate-conf"); /* required to build Mate */
        } else if (this.name.equals("libxml2"))         { this.addDependency("python"); /* required to build GNOME */
        } else if (this.name.equals("libgnome"))        { this.addDependency("esound"); /* "recommended for Gnome" */
        } else if (this.name.equals("libsoup")) { /* required to build Mate */
            this.addDependency("libmatekeyring");
            this.addDependency("mate-conf");
            this.addDependency("libproxy");
            this.addDependency("sqlite");

        } else if (this.name.equals("usbutils") || this.name.equals("pciutils")) {
            /* The 'update-...ids' script requires these to run */
            this.addDependency("wget");
            this.addDependency("which");
        }
    }

    /**
     * Returns the name of this script.
     */
    public String getName() {
        return this.name;
    }

    /* ------------------------------------------------------------------ */
    /* --------------------- Add download locations --------------------- */
    /* ------------------------------------------------------------------ */

    /*
     * Variables keeping track of the external source code and MD5 checksums.
     * Sources will be kept in the order in which they are added, this allows
     * for 'multipack' scripts which depend on packages build by themselves.
     *
     * Note: A single LinkedHashMap might present a cleaner implementation than
     * a separate List and Map, but unfortunately, Avian does not have it.
     */
    private String primarySource = null;
    private String primaryMD5 = null;
    private final Map<String, String> sources = new HashMap<String, String>();
    private final List<String> sourceOrder = new ArrayList<String>();

    /**
     * Sets the primary source code element.
     */
    public void setPrimarySource(final String url, final String md5sum) {
        this.primarySource = url;
        this.primaryMD5 = md5sum;
    }

    /**
     * Registers a source code element and corresponding MD5 checksum.
     */
    public void addSource(final String url, final String md5sum) {
        this.sources.put(url, md5sum);
        this.sourceOrder.add(url);
    }

    /**
     * Determines if each of the archives in the sources must be build
     * independently, but using the same build instructions.
     * <p>
     * At the time of writing, only a few Xorg scripts from BLFS require this.
     */
    public void setMultiBuild(final boolean multibuild) {
        this.multibuild = multibuild;
    }

    /* ------------------------------------------------------------------ */
    /* ----------------------- Manage dependencies ---------------------- */
    /* ------------------------------------------------------------------ */

    /* Keeps XML reference ID's of packages and maps them agains script names */
    private static final Map<String, String> refIds
            = new HashMap<String, String>();

    private final Set<String> dependencies = new HashSet<String>();

    /**
     * Maps a reference ID against this script's name.
     */
    public void addReferenceID(final String id) {
        Script.refIds.put(id, this.name);
    }

    /**
     * Adds a dependency to this script.
     */
    public void addDependency(final String referenceID) {
        if (referenceID.equals("udev")) { /* BLFS:UPOWER */
            this.dependencies.add("udev-rebuild");
        } else if (referenceID.equals("gcc")) { /* BLFS:GOBJECT-INTROSPECTION */
            /* Do not add gcc */
        } else {
            this.dependencies.add(referenceID);
        }
    }

    /* ------------------------------------------------------------------ */
    /* ---------------- Add and adjust build instructions --------------- */
    /* ------------------------------------------------------------------ */

    /* Variables keeping track of the instructions in the script. */
    private final List<String> preparation = new ArrayList<String>();
    private final List<String> pass2 = new ArrayList<String>();
    private final List<String> preinst = new ArrayList<String>();
    private final List<String> finalSystem = new ArrayList<String>();
    private final List<String> postinst = new ArrayList<String>();

    /**
     * Registers a command to be used in constructing the temporary toolchain.
     */
    public void putPreparation(String command, final boolean pass2) {
        command = Script.removeDoubleAmps(command);

        if (pass2) {
            this.pass2.add(command);
        } else {
            this.preparation.add(command);
        }
    }

    /**
     * Registers a compilation command. This command will be added without
     * adjusting for installation to a fake root.
     */
    public void putCompilation(String command) {
        this.extractExtraDependencies(command);
        command = Script.removeDoubleAmps(command);

        /* LFS:GROFF */
        if (command.indexOf("<paper_size>") != -1) {
            command = command.replace("<paper_size>", "A4");
            this.postinst.add("# (*) This will change the default paper size "
                    + "for groff when installing your\n#     system, if you "
                    + "have set up the PAGE variable in 'install.conf'.\nif [ "
                    + "\"${LFSCRIPT_INSTALL}\" == \"true\" ]; then\n    [ \""
                    + "${PAGE}\" != \"\" ] && echo \"${PAGE}\" > "
                    + "/etc/papersize\nfi");

        /* LFS:KERNEL */
        } else if (this.name.equals("kernel") &&
                command.equals("make mrproper")) {
            command = "#" + command;
        }

        this.finalSystem.add(command);
    }

    /**
     * Registers a command which will be adjusted for installation in to a
     * fake root directory.
     */
    public void putInstallation(String command) {
        this.extractExtraDependencies(command);
        command = Script.removeDoubleAmps(command);

        /* BLFS:POLKIT, DBUS */
        if (command.startsWith("groupadd ")) {
            this.putPreInstallation(command);
            return;
        }

        /* BLFS:DOCBOOK */
        if (command.indexOf("xmlcatalog ") > -1) {
            this.putPostInstallation(command, false);
            return;
        }

        /* BLFS:LLVM, QT, QT4 */
        if (!this.name.equals("glibc")) {
            command = command.replace("/ld.so.conf",
                    "/ld.so.conf.d/" + this.name + ".conf");

            if (command.indexOf("ld.so.conf.d") > -1) {
                command = "# (*) Utilize the ld.so.conf directory\n"
                        + "mkdir -pv /etc/ld.so.conf.d\n\n" + command;
            }
        }

        /* BLFS:METACITY, KDE, GNOME */
        command = command.replace("~/.xinitrc",
                "/etc/X11/app-defaults/xinitrc.d/"
                + this.getName() + ".xinitrc");

        /* BLFS:LLVM */
        command = command.replace("/extrapaths.sh", "/" + this.name + ".sh");

        if (command.indexOf("pathappend ") > -1) {
            this.addDependency("postlfs");
        }

        this.finalSystem.add(this.fakerootify(command));
    }

    /**
     * Registers a pre-installation command.
     */
    public void putPreInstallation(final String command) {
        this.preinst.add(Script.removeDoubleAmps(command));
    }

    /**
     * Registers a post-installation command.
     */
    public void putPostInstallation(String command, final boolean forceDelay) {
        if (forceDelay) {
            this.delayPostInst = true;
        }

        command = Script.removeDoubleAmps(command);

        /* ---- START SCRIPT SPECIFICS ---- */

        /* LFS:TEXINFO */
        if (command.indexOf("install-info ") > -1) {
            this.delayPostInst = true;
        }

        /* BLFS:DESKTOP-FILE-UTILS */
        if (command.indexOf("update-desktop-database ") > -1) {
            this.delayPostInst = true;
        }

        /* BLFS:GDK-PIXBUF */
        if (command.indexOf("gdk-pixbuf-query-loaders ") > -1) {
            this.delayPostInst = false;
        }        

        /* BLFS:DHCPCD */
        command = command
                .replace("<insert appropriate start options here>", "")
                .replace(" <insert additional stop options here>", "");

        /* LFS:GLIBC */
        if (command.equals("tzselect")) {
            this.postinst.add("# (*) This will run 'tzselect' to determine your"
                + " timezone when installing your\n#     system, unless you "
                + "have set up the TZ variable in 'install.conf'.\nif [ \""
                + "${LFSCRIPT_INSTALL}\" == \"true\" ]; then\n    [ \"${TZ}\""
                + " == \"\" ] && TZ=\"$(tzselect)\"\nelse\n    TZ=\"UTC\"\nfi"
                + "\n#" + command);
        } else if (command.indexOf("/usr/share/zoneinfo/<xxx>") != -1) {
            this.postinst.add("# (*) This will set the time zone to the one "
                    + "selected earlier.\n"
                    + command.replace("<xxx>", "${TZ}"));

        /* LFS:SHADOW */
        } else if (command.equals("passwd root")) {
            this.postinst.add("# (*) The password for root will be set during "
                    + "interactive configuration.\n#" + command);

        /* BLFS:PYTHON2, PYTHON3 */
        } else if (command.indexOf("export ") == 0) {
            this.putInstallation("cat > /etc/profile.d/" + this.name
                    + ".sh << \"EOF\"\n" + command + "\nEOF");

        /* BLFS:X7LIB */
        } else if (command.indexOf("XORG_PREFIX") > -1) {
            this.putInstallation(command);

        /* BLFS:ALSA-UTILS */
        } else if (command.startsWith("usermod ")) {
            this.postinst.add("#" + command);

        /* ---- END SCRIPT SPECIFICS ---- */

        /* BLFS Bootscripts */
        } else if (command.startsWith("make install-")) {
            this.putInstallation("includeBootscript " + command.substring(13));
            return;

        /* Static configuration */
        } else if (command.startsWith("cat >")
                || command.startsWith("install ")) { /* LFS:KERNEL */
            this.putInstallation(command);

        /* Default */
        } else {
            this.postinst.add(command);
        }
    }

    /**
     * Checks a command for indications that additional dependencies might be
     * required, and adds those dependencies to the dependency list.
     */
    private void extractExtraDependencies(final String command) {
        if (command.indexOf("pkg-config ") > -1
                && !this.name.equals("pkgconfig")) {
            this.addDependency("pkgconfig");
        }

        if (command.indexOf("ORBit-2.0") > -1
                && !this.name.equals("orbit2")) {
            this.addDependency("ORBit2");
        }
    }

    private static Map<String, String> destdirs = Script.getInitialDestdirs();

    private static Map<String, String> getInitialDestdirs() {
        final Map<String, String> retVal = new HashMap<String, String>();

        /* LFS */
        retVal.put("bzip2",    "PREFIX");
        retVal.put("glibc",    "install_root");
        retVal.put("kernel",   "INSTALL_MOD_PATH");
        retVal.put("sysklogd", "prefix");
        retVal.put("sysvinit", "ROOT");

        /* BLFS */
        retVal.put("acl",            "prefix");
        retVal.put("attr",           "prefix");
        retVal.put("cdrtools",       "INS_BASE");
        retVal.put("nasm",           "INSTALLROOT");
        retVal.put("openssl",        "INSTALL_PREFIX");
        retVal.put("unzip",          "prefix");
        retVal.put("wireless-tools", "PREFIX");
        retVal.put("zip",            "prefix");

        return retVal;
    }

    /**
     * Registers a <code>DESTDIR</code> alternative for a specific package.
     */
    public static void putDestdirFor(final String name, final String destvar) {
        Script.destdirs.put(name, destvar);
    }

    /**
     * Applies 'fakeroot' rules to a String.
     */
    private String fakerootify(String part) {
        final String original = part;

        if (part.equals("python setup.py install")) {
            part = "python setup.py install --root=${FAKEROOT}";
        } else if (!this.name.equals("linux-headers")) {
            final String destvar;
            if (Script.destdirs.get(this.name) != null) {
                destvar = " " + Script.destdirs.get(this.name) + "=";
            } else {
                destvar = " DESTDIR=";
            }

            if (this.name.equals("sysklogd")) {
                part = part.replace(" BINDIR=", " BINDIR=" + "${FAKEROOT}");
            } else if (this.name.equals("acl") || this.name.equals("attr")) {
                part = part.replace("make ", "make prefix=/usr ");
            } else if (this.name.equals("ppp")) {
                part = part.replace("make ", "make DESTDIR=/usr ");
            }

            if (part.indexOf(destvar) != -1) {
                part = part.replace(destvar, destvar + "${FAKEROOT}");
            } else {
                part = part.replace("make ", "make" + destvar + "${FAKEROOT} ");
            }
        }

        /* BLFS:MESALIB, XCB-PROTO, XKEYBOARD-CONFIG */
        if (part.indexOf("ln ") == -1) {
            part = part.replace(" $XORG_PREFIX", " ${FAKEROOT}${XORG_PREFIX}");
            part = part.replace(" ${XORG_PREFIX}",
                    " ${FAKEROOT}${XORG_PREFIX}");
        }

        part = part.replace(" /", " ${FAKEROOT}/");
        part = part.replace(" >/", " > ${FAKEROOT}/"); /* FIXME: Ncurses fix */

        /* BLFS:LLVM */
        part = part.replace("pathappend ${FAKEROOT}", "pathappend ");
        part = part.replace("ln -svf ${FAKEROOT}/", "ln -svf /");

        return Script.restoreHereDoc(part, original);
    }

    /**
     * Restores the contents of here-documents.
     */
    private static String restoreHereDoc(
            final String modified, final String original) {
        String retVal = modified;

        final String[] docStarts = { " << \"EOF\"" }; //, " << EOF" };
        for (final String docStart : docStarts) {
            final StringBuilder sb = new StringBuilder();

            int mSearch = 0;
            int oSearch = 0;

            int mStart;
            while ((mStart = retVal.indexOf(docStart, mSearch)) > -1) {
                mStart = retVal.indexOf('\n', mStart) + 1; /* Newline */

                sb.append(retVal.substring(mSearch, mStart));
                mSearch = retVal.indexOf("\nEOF", mStart);

                int oStart = original.indexOf(docStart, oSearch);
                oStart = original.indexOf('\n', oStart) + 1; /* Newline */

                oSearch = original.indexOf("\nEOF", oStart);
                sb.append(original.substring(oStart, oSearch));
            }
            retVal = sb.append(retVal.substring(mSearch)).toString();
        }

        return retVal;
    }

    /**
     * Removes '&&' from the end of command lines. Having '&&' in a scripted
     * command removes the capability of detecting command failures.
     */
    private static String removeDoubleAmps(final String command) {
        final StringBuilder retVal = new StringBuilder();

        final String[] lines = command.split("\n");
        for (String line : lines) {
            retVal.append('\n');
            if (line.trim().endsWith("&&")) {
                line = line.substring(0, line.lastIndexOf("&&"));

                /* Remove trailing whitespace */
                if (!line.trim().equals("")) {
                    int search = line.length() - 1;
                    while (line.charAt(search) < 0x21) {
                        search--;
                    }

                    retVal.append(line.substring(0, search + 1));
                }
            } else {
                retVal.append(line);
            }
        }

        return Script.restoreHereDoc(retVal.substring(1), command);
    }

    /* ------------------------------------------------------------------ */
    /* --------------- Scan instructions for source files --------------- */
    /* ------------------------------------------------------------------ */

    /* Keeps an instance of the file types returned by getFileTypes(). */
    private static final Set<String> fileTypes = Script.getFileTypes();

    /**
     * Returns an unmodifyable <code>Set</code> containing the file type
     * extentions for which the <code>usedFiles()</code> method scans.
     */
    private static Set<String> getFileTypes() {
        final Set<String> fileTypes = new HashSet<String>();

        fileTypes.add(".patch");
        fileTypes.add(".gz");
        fileTypes.add(".bz2");
        fileTypes.add(".zip");
        fileTypes.add(".xz");

        return Collections.unmodifiableSet(fileTypes);
    }

    /**
     * Returns a <code>Set</code> of filenames which occur in this script's
     * commands. This set can be used as a basis to look up which files must
     * be added as source to be able to build this package.
     * <p>
     * Note that xLFS does not contain explicit instructions for each package
     * to extract the primary source tarball. And thus this method does not add
     * that source to the returned <code>Set</code>.
     */
    public Set<String> usedFiles() {
        final Set<String> names = new HashSet<String>();

        final Set<String> delims = new HashSet<String>();
        delims.add(" ");
        delims.add("\n");

        final List<String> allCommands = new ArrayList<String>();
        allCommands.addAll(this.preparation);
        allCommands.addAll(this.pass2);
        allCommands.addAll(this.finalSystem);

        for (String command : allCommands) {
            command = command + "\n";

            if (command.indexOf("includeBootscript ") == 0) {
                names.add("blfs-bootscripts");
            }
if (false ||
//command.indexOf("pathappend") > -1 ||
//command.indexOf("extrapaths.sh") > -1 ||
command.indexOf("install-info") > -1 ||
//command.indexOf("ldconfig") > -1 ||
false) {
System.err.println("WARNING: " + this.name + " FIXME");
}
            for (final String delim : delims) {
                for (final String extention : this.fileTypes) {
                    final String search = extention + delim;

                    int found = -1;
                    while ((found = command.indexOf(search)) > -1) {
                        final String section = command.substring(0, found);
                        final int start = Math.max(
                                section.lastIndexOf(' ') + 1,
                                section.lastIndexOf('/') + 1);

                        final String name = section.substring(start, found)
                                + extention;
                        names.add(name);

                        command = command.replace(name, delim);
                    }
                }
            }
        }

        return names;
    }

    /* ------------------------------------------------------------------ */
    /* -------------------------- Write output -------------------------- */
    /* ------------------------------------------------------------------ */

    /**
     * Returns an LFScript 4.0 (new style) bash script.
     */
    public String getType4BScript(final boolean withHeader,
            final Map<String, String> entities, final boolean beyond) {

        final StringBuilder sb = new StringBuilder();

        sb.append("#!/bin/bash\n\n");

        /* File description header */
        if (withHeader && entities != null) {
            sb.append(
                    "# The instructions in this file are extracted from\n# '");

            if (beyond) {
                sb.append("Beyond ");
            }

            sb.append("Linux From Scratch");

            if (!beyond) {
                sb.append(" ").append(entities.get("&milestone;"));
            }

            sb.append("' (").append(entities.get("&version;")).append(" / ");
            sb.append(entities.get("&scriptfactory-rev;")).append(") but are ");
            sb.append("modified for use\n# with LFScript 4 which installs ");
            sb.append("the software to a fake root directory.\n#\n# ");

            if (beyond) {
                sb.append("Beyond ");
            }

            sb.append("Linux From Scratch is released under the MIT license.");
            sb.append("\n# Copyright (C) ");
            sb.append(entities.get("&copyrightdate;")).append(", ");

            if (beyond) {
                sb.append(entities.get("&copyholder;")).append("\n\n");
            } else {
                sb.append("Gerard Beekmans\n\n");
            }
        } else if (withHeader) {
            sb.append("# This file is part of LFScript. LFScript is released ");
            sb.append("under the MIT license.\n# Copyright (C) 2007-2012 ");
            sb.append("Marcel van den Boer\n\n");
        }

        /* Order sources and write lists */
        if (!this.sourceOrder.isEmpty() || this.primarySource != null) {
            final List<String> urls = new ArrayList<String>();
            final List<String> md5s = new ArrayList<String>();

            /* Places the primary source first */
            if (this.primarySource != null) {
                urls.add(this.primarySource);
                md5s.add(this.primaryMD5);
            }

            /* Adds remaining sources */
            final Collection<String> remaining;
            if (this.multibuild) {
                remaining = this.sourceOrder;
            } else {
                remaining = new TreeSet<String>(this.sourceOrder);
            }
            for (final String url : remaining) {
                if (!url.equals(this.primarySource)) {
                    final String md5 = this.sources.get(url);

                    urls.add(url);
                    md5s.add(md5);
                }
            }

            /* Write out WGETLIST */
            sb.append("WGETLIST=\"");
            for (int i = 0; i < urls.size(); i++) {
                sb.append(urls.get(i));
                if (i != urls.size() - 1) {
                    sb.append("\n          ");
                }
            }
            sb.append("\"\n");

            /* Write out MD5SUMLIST */
            sb.append("MD5SUMLIST=\"");
            for (int i = 0; i < md5s.size(); i++) {
                if (md5s.get(i) == null || md5s.get(i).indexOf('-') > -1) {
                    sb.append("dontverify");
                } else {
                    sb.append(md5s.get(i));
                }

                if (i != md5s.size() - 1) {
                    sb.append("\n            ");
                }
            }
            sb.append("\"\n");
        }

        /* Dependencies */
        if (!this.dependencies.isEmpty()) {

            /* Sort the dependencies by name */
            final Set<String> orderedDeps = new TreeSet<String>();
            for (final String dep : this.dependencies) {
                final String depVal = Script.refIds.get(dep);

                if (depVal == null) {
                    System.err.println("WARNING: Missing dependency '"
                            + dep + "' (detected in '" + this.name + "').");
                    Script.refIds.put(dep, dep);
                    orderedDeps.add(dep);
                } else {
                    orderedDeps.add(depVal);
                }
            }

            /* Write the list */
            sb.append("REQUIRES=\"");

            int i = 0;
            for (final String dependency : orderedDeps) {
                sb.append(dependency);

                if (i < orderedDeps.size() - 1) {
                    sb.append(' ');
                }

                i++;
            }

            sb.append("\"\n");
        }

        /* Additional variables */
        if (this.preparation.size() == 0 && this.finalSystem.size() == 0) {
            sb.append("TAGS=\"group\"\n");
        } else if (this.multibuild) {
            sb.append("TAGS=\"multi\"\n");
        } else if (!this.preinst.isEmpty()) {
            sb.append("TAGS=\"preinst\"\n");
        }

        if (this.postinst.size() > 0) {
            if (this.delayPostInst) {
                sb.append("POSTINST=\"true\"\n");
            } else {
                sb.append("POSTINST=\"now\"\n");
            }
        }

        /* Write main body */
        sb.append('\n');

        final String brace;
        if (this.finalSystem.size() == 0) {
            brace = "";
        } else {
            brace = "}; ";

            sb.append("###############################################\n");
            sb.append("installation() { # INSTALLING SYSTEM SOFTWARE #\n");
            sb.append("###############################################\n\n");

            for (final String command : this.finalSystem) {
                sb.append(command).append("\n\n");
            }
        }

        if (this.preinst.size() > 0) {
            sb.append("#################################################\n");
            sb.append("}; preinst() { # PRE-INSTALLATION CONFIGURATION #\n");
            sb.append("#################################################\n\n");

            for (final String command : this.preinst) {
                sb.append(command).append("\n\n");
            }
        }

        if (this.postinst.size() > 0) {
            sb.append("###################################################\n");
            sb.append("}; postinst() { # POST-INSTALLATION CONFIGURATION #\n#");
            sb.append("##################################################\n\n");

            for (final String command : this.postinst) {
                sb.append(command).append("\n\n");
            }
        }

        if (this.preparation.size() > 0) {

            final String marker;
            if (this.pass2.size() > 0) {
                marker = brace + "preparation_pass1() { "
                        + "# CONSTRUCTING A TEMPORARY SYSTEM (PASS 1) #";
            } else {
                marker = brace + "preparation() { "
                        + "# CONSTRUCTING A TEMPORARY SYSTEM #";
            }

            for (int i = 0; i < marker.length(); i++) {
                sb.append('#');
            }

            sb.append("\n").append(marker).append("\n");

            for (int i = 0; i < marker.length(); i++) {
                sb.append('#');
            }

            sb.append("\n\n");

            for (final String command : this.preparation) {
                sb.append(command).append("\n\n");
            }

            if (this.pass2.size() > 0) {

                sb.append("##################################################");
                sb.append("#######################\n}; preparation_pass2() { ");
                sb.append("# CONSTRUCTING A THE TEMPORARY SYSTEM (PASS 2) #\n");
                sb.append("##################################################");
                sb.append("#######################\n\n");

                for (final String command : this.pass2) {
                    sb.append(command).append("\n\n");
                }

                sb.append("##################################################");
                sb.append("#######################\n}; preparation() { # CONS");
                sb.append("TRUCTING A TEMPORARY SYSTEM (SCRIPT DELEGATOR) #\n");
                sb.append("##################################################");
                sb.append("#######################\n\nif [ \"${");
                sb.append(this.name.toUpperCase()).append("_PASS1}\" != \"com");
                sb.append("pleted\" ]; then\n    preparation_pass1\n    ");
                sb.append(this.name.toUpperCase()).append("_PASS1=\"completed");
                sb.append("\"\nelse\n    preparation_pass2\nfi\n\n");
            }
        }

        if (this.preparation.size() > 0 || this.finalSystem.size() > 0) {
            sb.append("#################\n} # END OF FILE #\n################");
            sb.append("#\n\n");
        }

        return sb.toString();
    }
}

