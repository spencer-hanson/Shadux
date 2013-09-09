#Installs parted to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs parted to the system
        echo --update updates the data for parted
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating parted...
        cd parted
        wget $(../links.sh parted)
        mv parted-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing parted...
        cp data/parted-*.tar* parted
        cd parted
        tar xf parted-*.tar*
	cd parted-*
	./configure --prefix=/usr --disable-static
	make
	make -C doc html
	makeinfo --html -o doc/html doc/parted.texi
	makeinfo --plaintext -o doc/parted.txt doc/parted.texi
	make install
	install -v -m755 -d /usr/share/doc/parted-3.1/html
	install -v -m644 doc/html/* /usr/share/doc/parted-3.1/html
	install -v -m644 doc/{FAT,API,parted.{txt,html}} /usr/share/doc/parted-3.1
	cd ..
        echo Finished, Cleaning up...
        rm parted-*.tar*
        rm -r parted-*
        echo Done!
        exit
fi
usage
