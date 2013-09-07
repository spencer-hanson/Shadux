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
	dhcpcd/dhcpcd.sh --update | tee dhcpcd_update.log
	gpm/gpm.sh --update | tee gpm_update.log
	links/links.sh --update | tee links_update.log
	iptables/iptables.sh --update | tee iptables_update.log
	linuxpam/linuxpam.sh --update | tee linuxpam_update.log
	shadow/shadow.sh --update | tee shadow_update.log
	lsb/lsb.sh --update | tee lsb_update.log
	nano/nano.sh --update | tee nano_update.log
	nettools/nettools.sh --update | tee nettools_update.log
	ntfs/ntfs.sh --update | tee ntfs_update.log
	openssl/openssl.sh --update | tee openssl_update.log
	openssl/certauth.sh --update | tee certauth_update.log
	openssh/openssh.sh --update | tee openssh_update.log
	parted/parted.sh --update | tee parted_update.log
	usersys/usersys.sh --update | tee usersys_update.log
	bootscripts/bootscripts.sh --update | tee bootscripts_update.log
	man/man.sh --update | tee man_update.log
	echo Done updating all packages!
	exit
fi


if [ "$1" = "--install" ] ; then
        dhcpcd/dhcpcd.sh --install | tee dhcpcd_install.log
        gpm/gpm.sh --install | tee gpm_install.log
        links/links.sh --install | tee links_install.log
        iptables/iptables.sh --install | tee iptables_install.log
        linuxpam/linuxpam.sh --install | tee linuxpam_install.log
        shadow/shadow.sh --install | tee shadow_install.log
        lsb/lsb.sh --install | tee lsb_install.log
        nano/nano.sh --install | tee nano_install.log
        nettools/nettools.sh --install | tee nettools_install.log
        ntfs/ntfs.sh --install | tee ntfs_install.log
        openssl/openssl.sh --install | tee openssl_install.log
        openssl/certauth.sh --install | tee certauth_install.log
        openssh/openssh.sh --install | tee openssh_install.log
        parted/parted.sh --install | tee parted_install.log
        usersys/usersys.sh --install | tee usersys_install.log
        bootscripts/bootscripts.sh --install | tee bootscripts_install.log
        man/man.sh --install | tee man_install.log
	echo Done installing all packages!
	exit
fi
usage
