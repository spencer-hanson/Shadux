#!/bin/bash
DIR=$$
exec > >(tee -i dep_$DIR\_log.txt)

GMP="https://gmplib.org/download/gmp/gmp-6.1.0.tar.bz2"
MPFR="http://www.mpfr.org/mpfr-current/mpfr-3.1.4.tar.bz2"
MPC="ftp://ftp.gnu.org/gnu/mpc/mpc-1.0.3.tar.gz"

mkdir depend
cd depend

mkdir dep.$DIR.tmp
cd dep.$DIR.tmp

if [ "$EUID" -ne 0 ]; then
	echo "Please run as root!"
	exit
fi
apt-get update
apt-get upgrade -y
apt-get install -y bison gawk m4 libncurses-dev
rm /bin/sh
ln -s /bin/bash /bin/sh



wget $GMP
tar xf gmp-6.1.0.tar.bz2
cd gmp-6.1.0
./configure
make
make check
make install
cp libgmp.la /usr/lib
mkdir /usr/lib/.libs
cp /usr/local/lib/libgmp.so /usr/lib/.libs
cd ..
wget $MPFR
tar xf mpfr-3.1.4.tar.bz2
cd mpfr-3.1.4
./configure
make
make check
make install
cp /usr/local/lib/libmpfr.la /usr/lib

wget $MPC
tar xf mpc-1.0.3.tar.gz
cd mpc-1.0.3
./configure
make
make check
make install
cp /usr/local/lib/libmpc.la /usr/lib
cd ..

echo Done!
