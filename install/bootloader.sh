#!/bin/bash
#$1 = install path
function usage() {
	echo $0 \<install root\>
}
if [ -z "$1" ] ; then
	usage
	exit
fi
mount --bind /sys $1/sys
mount --bind /proc $1/proc
mount --bind /dev $1/dev

chroot $1 grub-install /dev/sda
chroot $1 grub-mkconfig -o /boot/grub/grub.cfg

umount $1/{sys,proc,dev}


