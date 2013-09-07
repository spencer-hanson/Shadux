#Builds an iso file from the specified partition
#!/bin/bash
function usage() {
	echo Usage: $0 \<sda partition\>
	echo $0 /dev/sda1
}
if [ -z "$1" ] ; then
	usage
	exit
fi
echo Building ISO file...
echo Creating image file...
dd if=/dev/zero of=sources/rootfs-$(uname -m).img bs=1G seek=10 count=0
mkfs.ext4 -F sources/rootfs-$(uname -m).img
mkdir -v install_root
echo Mounting image file...
mount -o loop sources/rootfs-$(uname -m).img install_root
echo Mounting $1 at /mnt/SOS...
mkdir /mnt/SOS
mount $1 /mnt/SOS
echo Copying /mnt/SOS to image file...
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
echo Unmouting image and creating iso file...
umount install_root
./lfscript -Bux buildiso
echo Done!
