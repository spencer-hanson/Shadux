#!/bin/bash
bootscripts="www.linuxfromscratch.org/blfs/downloads/svn/blfs-bootscripts-20130710.tar.bz2"
dhcpcd="http://roy.marples.name/downloads/dhcpcd/dhcpcd-6.0.5.tar.bz2"
gpm="www.nico.schottelius.org/software/gpm/archives/gpm-1.20.7.tar.bz2"
links="links.twibright.com/download/links-2.7.tar.bz2"
iptables="www.netfilter.org/projects/iptables/files/iptables-1.4.19.1.tar.bz2"
linuxpam="linux-pam.org/library/Linux-PAM-1.1.6.tar.bz2"
shadow="pkg-shadow.alioth.debian.org/releases/shadow-4.1.5.1.tar.bz2"
lsb="sourceforge.net/projects/lsb/files/lsb_release/1.4/lsb-release-1.4.tar.gz"
nettools="anduin.linuxfromscratch.org/sources/BLFS/svn/n/net-tools-CVS_20101030.tar.gz"
ntfs="tuxera.com/opensource/ntfs-3g_ntfsprogs-2013.1.13.tgz"
nano="www.nano-editor.org/dist/v2.0/nano-2.0.7.tar.gz"
openssh="ftp.openbsd.org/pub/OpenBSD/OpenSSH/portable/openssh-6.2p2.tar.gz"
openssl="ftp.openssl.org/source/openssl-1.0.1e.tar.gz"
openssl_patch1="www.linuxfromscratch.org/patches/blfs/svn/openssl-1.0.1e-fix_parallel_build-1.patch"
openssl_patch2="www.linuxfromscratch.org/patches/blfs/svn/openssl-1.0.1e-fix_pod_syntax-1.patch"
parted="ftp.gnu.org/gnu/parted/parted-3.1.tar.xz"

if [ "$1" = "bootscripts" ] ; then
	echo $bootscripts
fi

if [ "$1" = "dhcpcd" ] ; then
	echo $dhcpcd
fi

if [ "$1" = "gpm" ] ; then
	echo $gpm
fi

if [ "$1" = "links" ] ; then
	echo $links
fi

if [ "$1" = "iptables" ] ; then
	echo $iptables
fi

if [ "$1" = "linuxpam" ] ; then
	echo $linuxpam
fi

if [ "$1" = "shadow" ] ; then
	echo $shadow
fi

if [ "$1" = "lsb" ] ; then
	echo $lsb
fi

if [ "$1" = "nettools" ] ; then
	echo $nettools
fi

if [ "$1" = "ntfs" ] ; then
	echo $ntfs
fi

if [ "$1" = "nano" ] ; then
	echo $nano
fi

if [ "$1" = "openssh" ] ; then
	echo $openssh
fi

if [ "$1" = "openssl" ] ; then
	echo $openssl
fi

if [ "$1" = "openssl_patch1" ] ; then
	echo $openssl_patch1
fi

if [ "$1" = "openssl_patch2" ] ; then
	echo $openssl_patch2
fi

if [ "$1" = "parted" ] ; then
	echo $parted
fi
