#Installs links to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs links to the system
        echo --update updates the data for links
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating links...
        cd links
        wget $(../links.sh links)
        mv links-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing links...
        cp data/links-*.tar* links
        cd links
        tar xf linkw-*.tar*
	cd links-*
	./configure --prefix=/usr
	make
	make install
	install -v -d -m755 /usr/share/doc/links-2.7
	install -v -m644 doc/links_cal/* KEYS BRAILLE_HOWTO \
	    /usr/share/doc/links-2.7
	cd ..
        echo Finished, Cleaning up...
        rm links-*.tar*
        rm -r links-*
        echo Done!
        exit
fi
usage
