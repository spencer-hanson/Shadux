#Installs nettools to the system
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs nettools to the system
        echo --update updates the data for nettools
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Updating nettools...
        cd nettools
        wget $(../links.sh nettools)
        mv net-tools-*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing nettools...
        cp data/net-tools-*.tar* nettools
        cd nettools
        tar xf net-tools-*.tar*
	cd net-tools-*
	sed -i -e '/Token/s/y$/n/' config.in
	sed -i -e '/HAVE_HWSTRIP/s/y$/n/' config.in
	yes "" | make config
	make
	make update
	cd ..
        echo Finished, Cleaning up...
        rm net-tools-*.tar*
        rm -r net-tools-*
        echo Done!
        exit
fi
usage
