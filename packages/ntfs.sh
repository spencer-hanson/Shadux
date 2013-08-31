#!/bin/bash
echo Don\'t forget to install the kernel module!
#read -p "Press enter to continue..."
echo Installing NTFS...
wget tuxera.com/opensource/ntfs-3g_ntfsprogs-2013.1.13.tgz
if [ -z "$1" ] ; then
tar xf ntfs-3g_ntfsprogs-2013.1.13.tgz
cd ntfs-3g_ntfsprogs-2013.1.13
./configure --prefix=/usr --disable-static
make
make install
ln -sv /bin/ntfs-3g /sbin/mount.ntfs
ln -sv /usr/share/man/man8/{ntfs-3g,mount.ntfs}.8
chmod -v 4755 /sbin/mount.ntfs
echo Cleaning up...
cd ..
rm ntfs-3g_ntfsprogs-2013.1.13.tgz
rm -r ntfs-3g_ntfsprogs-2013.1.13
fi
echo Done!
