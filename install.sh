#!/bin/bash
function usage() {
	echo $0 \<install root\>
}
if [ -z "$1" ] ; then
	usage
	exit
fi
echo Comiling...
/mnt/usb/scripts/compile.sh $1
echo Setting up fstab...
/mnt/usb/scripts/fstab.sh $1/etc/fstab
echo Installing bootloader...
/mnt/usb/scripts/bootloader.sh $1
echo Done!

