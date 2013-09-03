#!/bin/bash
if [ ! -f lfscript ]; then
	echo lfscript not found!
	exit
fi
echo Creating image file...
dd if=/dev/zero of=sources/rootfs-$(uname -m).img bs=1G seek=10 count=0
mkfs.ext4 -F sources/rootfs-$(uname -m).img
mkdir -v install_root
echo Mounting and compiling image file...
mount -o loop sources/rootfs-$(uname -m).img install_root
if [ -z "$1" ] ; then
echo Compiling base...
/mnt/usb/scripts/compile.sh install_root
else
echo Copying sda1 to install_root...
cp -r /mnt/SOS/* install_root
cat > "install_root/etc/fstab" << "EOF"
#/etc/fstab
#file system  mount-point type     options              dump  fsck order
rootfs        /           auto     defaults             0     0
proc          /proc       proc     nosuid,noexec,nodev  0     0
sysfs         /sys        sysfs    nosuid,noexec,nodev  0     0
devpts        /dev/pts    devpts   gid=4,mode=620       0     0
tmpfs         /run        tmpfs    defaults             0     0
devtmpfs      /dev        devtmpfs mode=0755,nosuid     0     0
#end of /etc/fstab
EOF
fi
echo Unmouting image and creating iso file...
umount install_root
./lfscript -Bux buildiso
echo Done!
