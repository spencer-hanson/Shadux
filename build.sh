#!/bin/bash
if [ "$EUID" -ne 0 ]; then
	echo "Please run as root!"
	echo "Syntax: $0 [kernel.config]"
	exit
fi

#Install dependencies
if [ -d "depend" ]; then
	./util/dependencies.sh
fi

#Make sources folder
if [ -d "sources" ]; then
	mkdir sources
fi

#Download sources
./lfscript -BS || { echo "Downloading sources failed!" ; exit 1;}


#Build system
if [ -z ${1+x} ]; then
	./lfscript -Bux "wget" -k $1
else
	./lfscript -Bux "wget" -k kernel_64bit.config
fi
