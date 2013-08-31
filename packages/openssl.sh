#!/bin/bash
if [ ! -d "openssl-req" ] ; then
	echo Error! Requires openssl-req to execute
	exit
fi
echo Installing openssl...
wget www.openssl.org/source/openssl-1.0.1e.tar.gz
wget www.linuxfromscratch.org/patches/blfs/svn/openssl-1.0.1e-fix_parallel_build-1.patch
wget www.linuxfromscratch.org/patches/blfs/svn/openssl-1.0.1e-fix_pod_syntax-1.patch
if [ -z "$1" ] ; then
tar xf openssl-1.0.1e.tar.gz
cd openssl-1.0.1e
patch -Np1 -i ../openssl-1.0.1e-fix_parallel_build-1.patch
patch -Np1 -i ../openssl-1.0.1e-fix_pod_syntax-1.patch
./config --prefix=/usr --openssldir=/etc/ssl shared zlib-dynamic
make
make MANDIR=/usr/share/man MANSUFFIX=ssl install &&
install -dv -m755 /usr/share/doc/openssl-1.0.1e  &&
cp -vfr doc/*     /usr/share/doc/openssl-1.0.1e
echo Cleaning up...
cd ..
rm -r openssl-1.0.1e
rm openssl-1.0.1e-fix_pod_syntax-1.patch
rm openssl-1.0.1e-fix_parallel_build-1.patch
rm openssl-1.0.1e.tar.gz
fi
cd openssl-req
echo CertAuth
./certauth.sh $1
echo OpenSSH
./openssh.sh $1
cd ..
echo Done!
