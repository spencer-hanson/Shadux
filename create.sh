#!/bin/bash
function pause() {
	read -p "Press enter to continue"
}

function cont() {
	echo Continue? y/n
	read CONT
	if [ $CONT = "N" ] || [ $CONT = "n" ]; then
		exit
	fi
}

echo sda1 - Linux Filesystem
echo sda2 - Linux Filesystem /usr mounted here
echo sda3 - SWAP space
echo sda4 - LFScript space
pause
cfdisk

echo Creating Swap Space...
mkswap /dev/sda3
swapon /dev/sda3

echo Formatting base system...
mkdir /mnt/lfs
mkfs.ext4 /dev/sda4
mount /dev/sda4 /mnt/lfs
cd /mnt/lfs

echo Getting lfscript..
wget lfscript.org/latest.tar.bz2
tar xf latest.tar.bz2
cd lfscript4-revision*
./lfscript -BS
echo Done!
