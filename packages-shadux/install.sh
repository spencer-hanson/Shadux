#Installs all packages
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs all packages to the system
        echo --update updates the data for all packages
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
	dhcpcd/dhcpcd.sh --update | tee logs/dhcpcd_update.log
	gpm/gpm.sh --update | tee logs/gpm_update.log
	links/links.sh --update | tee logs/links_update.log
	iptables/iptables.sh --update | tee logs/iptables_update.log
	linuxpam/linuxpam.sh --update | tee logs/linuxpam_update.log
	shadow/shadow.sh --update | tee logs/shadow_update.log
	lsb/lsb.sh --update | tee logs/lsb_update.log
	nano/nano.sh --update | tee logs/nano_update.log
	nettools/nettools.sh --update | tee logs/nettools_update.log
	ntfs/ntfs.sh --update | tee logs/ntfs_update.log
	openssl/openssl.sh --update | tee logs/openssl_update.log
	openssl/certauth.sh --update | tee logs/certauth_update.log
	openssh/openssh.sh --update | tee logs/openssh_update.log
	parted/parted.sh --update | tee logs/parted_update.log
	usersys/usersys.sh --update | tee logs/usersys_update.log
	bootscripts/bootscripts.sh --update | tee logs/bootscripts_update.log
	man/man.sh --update | tee logs/man_update.log
	echo Done updating all packages!
	exit
fi


if [ "$1" = "--install" ] ; then
        dhcpcd/dhcpcd.sh --install | tee logs/dhcpcd_install.log
        gpm/gpm.sh --install | tee logs/gpm_install.log
        links/links.sh --install | tee logs/links_install.log
        iptables/iptables.sh --install | tee logs/iptables_install.log
        linuxpam/linuxpam.sh --install | tee logs/linuxpam_install.log
        shadow/shadow.sh --install | tee logs/shadow_install.log
        lsb/lsb.sh --install | tee logs/lsb_install.log
        nano/nano.sh --install | tee logs/nano_install.log
        nettools/nettools.sh --install | tee logs/nettools_install.log
        ntfs/ntfs.sh --install | tee logs/ntfs_install.log
        openssl/openssl.sh --install | tee logs/openssl_install.log
        openssl/certauth.sh --install | tee logs/certauth_install.log
        openssh/openssh.sh --install | tee logs/openssh_install.log
        parted/parted.sh --install | tee logs/parted_install.log
        usersys/usersys.sh --install | tee logs/usersys_install.log
        bootscripts/bootscripts.sh --install | tee logs/bootscripts_install.log
        man/man.sh --install | tee logs/man_install.log
	echo Done installing all packages!
	exit
fi
usage
