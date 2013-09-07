#Installs nano to they system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs nano to the system
        echo --update updates the data for nano
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating nano...
        cd nano
        wget $(../links.sh nano)
        mv nano-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing nano...
        cp data/nano-*.tar* nano
        cd nano
        tar xf nano-*.tar*
	cd nano-*
	./configure --disable-wrapping --disable-speller --enable-extra --enable-color --enable-utf8 --prefix=/usr --sysconfdir=/etc/nano --enable-multibuffer --enable-nanorc --enable-color --enable-all && make
	make install
	install -v -m644 -D doc/nanorc.sample /etc/nano/nanorc.sample
	install -v -m755 -d /usr/share/doc/nano-2.0.7
	install -v -m644 doc/{,man/,texinfo/}*.html /usr/share/doc/nano-2.0.7
	cd ..
        echo Finished, Cleaning up...
        rm nano-*.tar*
        rm -r nano-*
        echo Done!
        exit
fi
usage
