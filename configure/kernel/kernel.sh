#Rebuilds kernel, optional only recompile
#!/bin/bash
function usage() {
	echo Usage: $0 [--recompile]
	echo --recompile	Only recompiles the kernel
	echo Recompiles and reconfigures the kernel
}
function recompile() {
	echo Recompiling kernel...
	./lfscript -BU kernel -k kernel.config
}

if [ ! -f lfscript ] ; then
	echo lfscript not found!
	echo Aborting.
	exit
fi

if [ "$1" = "--help" ] ; then
	usage
	exit
fi

if [ "$1" = "--recompile" ] ; then
	recompile
	echo Done!
	exit
fi
echo Installing sources...
./lfscript -BS
cd sources
tar xf linux-3.*.tar.xz
rm linux-3.*.tar.xz
cd linux-3.*
echo Making packages...
make mrproper
make defconfig
make menuconfig
cp -v .config ../../kernel.config
cd ../../
recompile
echo Done!
