#!/bin/bash
function usage() {
	echo Usage: $0 \<install directory\> \<other args\>
}
if [ -z "$1" ]; then
	usage
	exit
fi

if [ ! -f mykernel.config ]; then
	echo Can\'t find mykernel.config!
	exit
fi

if [ ! -f lfscript ]; then
	echo Can\'t find lfscript!
	exit
fi

./lfscript -Bux "wget x-window-system" -i $1 $2 -k mykernel.config
