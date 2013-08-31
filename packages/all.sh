#!/bin/bash
echo Start Install of all packages!
U="/mnt/usb/scripts/packages"
$U/lsb.sh $1
$U/man.sh $1
$U/nano.sh $1
$U/ntfs.sh $1
$U/parted.sh $1
$U/usersys.sh $1
#$U/dhcpcd.sh $1
$U/nettools.sh $1
$U/openssl.sh $1
$U/linuxpam.sh
$U/iptables.sh $1
#Always last
$U/bootscripts.sh $1
echo Finished Install of all packages!
