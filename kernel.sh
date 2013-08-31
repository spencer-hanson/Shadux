#!/bin/bash
if [ ! -f lfscript ] ; then
	echo lfscript not found!
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
cp -v .config ../../mykernel.config
cd ../../
echo Recompiling kernel...
./lfscript -BU kernel -k mykernel.config
echo Done!
