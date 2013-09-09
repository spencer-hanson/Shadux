#Installs lsb to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs lsb to the system
        echo --update updates the data for lsb
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating lsb...
        cd lsb
        wget $(../links.sh lsb)
        mv lsb-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing lsb...
        cp data/lsb-release*.tar* lsb
        cd lsb
	tar xf lsb-release*.tar*
	cd lsb-release-*
	./help2man -N --include ./lsb_release.examples --alt_version_key=program_version ./lsb_release > lsb_release.1
	install -v -m 755 lsb_release /usr/bin/lsb_release
	cd ..
	cp lsb-release /etc/lsb-release
        echo Finished, Cleaning up...
        rm lsb-*.tar*
        rm -r lsb-*
        echo Done!
        exit
fi
usage
