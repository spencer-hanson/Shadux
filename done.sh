#!/bin/bash
echo Closing up...
cd
umount /mnt/SOS/usr
umount /mnt/SOS
umount /mnt/lfs
rmdir /mnt/SOS/usr
rmdir /mnt/SOS
rmdir /mnt/lfs
echo Done!
echo Just unmount /mnt/usb and you\'re good to go!
