#!/bin/bash
echo Installing...
wget www.linuxfromscratch.org/blfs/downloads/svn/blfs-bootscripts-20130710.tar.bz2
if [ -z "$1" ] ; then
tar xf blfs-bootscripts-20130710.tar.bz2
cd blfs-bootscripts-20130710
make install-service-dhcpcd
make install-sshd
make install-random
make install-iptables
make install-gpm
cd ..
echo Cleaning up...
rm blfs-bootscripts-20130710.tar.bz2
rm -r blfs-bootscripts-20130710
fi
echo Done!

