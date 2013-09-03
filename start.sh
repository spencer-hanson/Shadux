#!/bin/bash
mkdir /mnt/SOS
mount /dev/sda1 /mnt/SOS
mkdir /mnt/SOS/usr
mount /dev/sda2 /mnt/SOS/usr
mkdir /mnt/lfs
mount /dev/sda4 /mnt/lfs
