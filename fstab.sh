#!/bin/bash
function usage() {
	echo Usage $0 \<fstab path\>
}

if [ -z "$1" ]; then
	usage
	exit
fi

cat > $1 << "EOF"
#Begin /etc/fstab

#File System   Mount-point   Type    Options             dump  fsck
#					                       order
/dev/sda1      /            ext4     defaults            1     1
/dev/sda2      /usr         ext4     defaults            1     1
/dev/sda3      swap         swap     pri=1               0     0

proc           /proc        proc     nosuid,noexec,nodev 0     0
sysfs          /sys         sysfs    nosuid,noexec,nodev 0     0
devpts         /dev/pts     devpts   gid=4,mode=620      0     0
tmpfs          /run         tmpfs    defaults            0     0
devtmpfs       /dev         devtmpfs mode=0755,nosuid    0     0
#End of /etc/fstab
EOF
