#Sets up different functions of the usersystem
#!/bin/bash
function usage() {
        echo Usage $0 [--install] [--update]
        echo --install installs the usersystem files to the system
	echo --update doesn\'t do anything
}

if [ -z "$1" ] ; then
        usage
        exit
fi

if [ "$1" = "--update" ] ; then
        echo Usersystem up to date!
        exit
fi


if [ "$1" = "--install" ] ; then
        echo Installing Usersys...
        cd usersys
	echo Copying skel to /etc
	cp -r skel /etc
	echo Copying profile to /etc/profile...
	cp profile /etc/profile
	echo Creating /etc/profile.d...
	install --directory --mode=0755 --owner=root --group=root /etc/profile.d
	echo Copying dircolors.sh to /etc/profile.d/dircolors.sh...
	cp dircolors.sh /etc/profile.d
	echo Copying extrapaths.sh to /etc/profile.d/extrapaths.sh...
	dircolors -p > /etc/dircolors
	echo Copying readline.sh to /etc/profile.d/readline.sh...
	cp readline.sh /etc/profile.d
	echo Copying umask.sh to /etc/profile.d/umask.sh...
	cp umask.sh /etc/profile.d
	echo Setting up /etc/profile.d/i18n.sh...
cat > /etc/profile.d/i18n.sh << "EOF"
export LANG=en_us.US-ASCII
EOF
	echo Copying bashrc to /etc/bashrc...
	cp bashrc /etc
	echo Setting up /etc/shells
cat > /etc/shells << "EOF"
#Begin of /etc/shells
/bin/sh
/bin/bash
EOF
	echo Copying issue to /etc/issue...
	rm /etc/issue
	cp issue /etc/issue
	echo Done!
	exit
fi
usage
