#Builds either an iso file or the system
#!/bin/bash
function usage() {
	echo Usage: $0 [--iso \<sda partition\>] [--sys \<install directory\> \<other args\>]
	echo --iso build iso file
	echo --sys build system
}

if [ ! -f lfscript ]; then
        echo Can\'t find lfscript!
        echo Aborting
        exit
fi

if [ -z "$1" ] ; then
	usage
	exit
fi

if [ -z "$2" ] ; then
	usage
	exit
fi

if [ "$1" = "--iso" ] ; then
	build/buildiso.sh $2
fi

if [ "$1" = "--sys" ] ; then
	build/buildsys.sh $2 $3 $4 $5 $6 $7 $8 $9
fi
