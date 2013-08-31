#!/bin/bash
echo Installing DHCPCD...
tar xf tars/dhcpcd-5.6.7.tar.bz2
cd dhcpcd-5.6.7
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
echo Cleaning up...
rm -r dhcpcd-5.6.7.tar.bz2
rm dhcpcd-5.6.7
echo Done!
