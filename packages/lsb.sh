#!/bin/bash
echo Installing lsb...
wget sourceforge.net/projects/lsb/files/lsb_release/1.4/lsb-release-1.4.tar.gz
if [ -z "$1" ] ; then
tar xf lsb-release-1.4.tar.gz
cd lsb-release-1.4
./help2man -N --include ./lsb_release.examples --alt_version_key=program_version ./lsb_release > lsb_release.1
install -v -m 755 lsb_release /usr/bin/lsb_release
cd ..
echo Cleaning up...
rm lsb-release-1.4.tar.gz
rm -r lsb-release-1.4
cat > /etc/lsb-release << "EOF"
LSB_VERSION="1.4"
DISTRIB_ID="Shadux"
DISTRIB_RELEASE="0.2"
DISTRIB_CODENAME="Shadux"
DISTRIB_DESCRIPTION="SOS - Shadux Operating System Developed by Spencer Hanson"
EOF
fi
echo Done!
