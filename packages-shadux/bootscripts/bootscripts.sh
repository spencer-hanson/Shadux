#Recompiles the bootscript package for support for other packages
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs bootscripts to the system
        echo --update updates the data for bootscripts
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
	echo Updating bootscripts...
        cd bootscripts
        wget $(../links.sh bootscripts)
        mv blfs-bootscripts*.tar* ../data
        echo Done!
        exit
fi


if [ "$1" = "--install" ] ; then
	echo Installing bootscripts...
	cp data/blfs-bootscripts*.tar* bootscripts
	cd bootscripts
	tar xf blfs-bootscripts*.tar*
	cd blfs-bootscripts*
	make install-service-dhcpcd
	make install-sshd
	make install-random
	make install-iptables
	make install-gpm
	cd ..
	echo Finished, Cleaning up...
	rm blfs-bootscripts*.tar*
	rm -r blfs-bootscripts*
	echo Done!
	exit
fi
usage
