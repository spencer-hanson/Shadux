#Installs dhcpcd onto the system
#!/bin/bash
function usage() {
	echo Usage: $0 [--install] [--update]
	echo --install installs dhcpcd onto the system
	echo --update updates the dhcpcd tarfile
}

if [ -z "$1" ] ; then
	usage
	exit
fi

if [ "$1" = "--update" ] ; then
	echo Updating DHCPCD...
	cd dhcpcd
	wget $(../links.sh dhcpcd)
	mv dhcpcd-*.tar* ../data
	echo Done!
	exit
fi

if [ "$1" = "--install" ] ; then
	echo Installing DHCPCD...
	cp data/dhcpcd-*.tar* dhcpcd
	cd dhcpcd
	tar xf dhcpcd-*.tar*
	cd dhcpcd-*
	./configure --libexecdir=/lib/dhcpcd --dbdir=/run --sysconfdir=/etc
	make
	make install
	sed -i "s;/var/lib;run/;g" dhcpcd-hooks/50-dhcpcd-compat
	install -v -m 644 dhcpcd-hooks/50-dhcpcd-compat /lib/dhcpcd/dhcpcd-hooks/
	echo Configuring...
	cat > /etc/sysconfig/ifconfig.eth0 << "EOF"
	ONBOOT="yes"
	IFACE="eth0"
	SERVICE="dhcpcd"
	DHCP_START="-b -q"
	DHCP_STOP="-k"
	EOF
	echo Finished, Cleaning up...
	rm dhcpcd-*.tar.bz2
	rm -r dhcpcd-*
	echo Done!
	exit
fi
usage
