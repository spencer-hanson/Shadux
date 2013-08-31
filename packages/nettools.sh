#!/bin/bash
echo Installing Net tools...
wget anduin.linuxfromscratch.org/sources/BLFS/svn/n/net-tools-CVS_20101030.tar.gz
if [ -z "$1" ] ; then
tar xf net-tools-CVS_20101030.tar.gz
cd net-tools-CVS_20101030
sed -i -e '/Token/s/y$/n/' config.in
sed -i -e '/HAVE_HWSTRIP/s/y$/n/' config.in
yes "" | make config
make
make update
cd ..
echo Cleaning up...
rm -r net-tools-CVS_20101030
rm net-tools-CVS_20101030.tar.gz
fi
echo Done!
