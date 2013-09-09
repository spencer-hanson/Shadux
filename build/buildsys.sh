#Compiles the OS in specified directory
#!/bin/bash
function usage() {
	echo Usage: $0 [--build] \<install directory\> \<other args\>
	echo --build builds system with no mountpoint
}
if [ -z "$1" ]; then
	usage
	exit
fi

if [ ! -f kernel.config ]; then
	echo Can\'t find kernel.config!
	echo Aborting.
	exit
fi

if [ ! -f lfscript ]; then
	echo Can\'t find lfscript!
	echo Aborting
	exit
fi

if [ "$1" = "--build" ] ; then
	./lfscript -Bux "wget x-window-system" $2 $3 $4 $5 $6 $7 $8 -k kernel.config
	exit
fi
./lfscript -Bux "wget x-window-system" -i $1 $2 $3 $4 $5 $6 $7 $8 -k kernel.config
