#!/bin/bash
if [ ! -z "$1" ] ; then
	exit
fi
if [ ! -d "usersys-req" ] ; then
	echo Error! Requires usersys-req to execute
	exit
fi
echo Setting up /etc/skel...
mkdir /etc/skel
cd /etc/skel
mkdir Desktop
mkdir Documents
echo Setting up /etc/profile...
#/etc/profile
cat > /etc/profile << "EOF"
pathremove() {
	local IFS=':'
	local NEWPATH
	local DIR
	local PATHVARIBLE=${2:-PATH}
	for DIR in ${!PATHVARIBLE} ; do
		if [ "$DIR" != "$1" ] ; then
			NEWPATH=${NEWPATH:+$NEWPATH:}$DIR
		fi
	done
	export $PATHVARIBLE="$NEWPATH"
}

pathprepend() {
	pathremove $1 $2
	local PATHVARIBLE=${2:-PATH}
	export $PATHVARIBLE="$1{!PATHVARIBLE:+:${!PATHVARIBLE}}"
}

pathappend() {
	pathremove $1 $2
	local PATHVARIBLE=${2:-PATH}
	export $PATHVARIBLE="${!PATHVARIBLE:+${!PATHVARIBLE}:}$1"
}

export PATH=/bin:/usr/bin

if [ $EUID -eq 0 ]; then
	pathappend /sbin:/usr/sbin
	unset HISTFILE
fi

export HISTSIZE=1000
export HISTIGNORE="&:[bf]g:exit"

NORMAL="\[\e[0m\]"
RED="\[\e[1;31m\]"
GREEN="\[\e[1;32m\]"

if [[ $EUID == 0 ]] ; then
	PS1="$RED\u [ $NORMAL\w$RED ]# $NORMAL"
else
	PS1="$GREEN\u [ $NORMAL\w$GREEN ]\$ $NORMAL"
fi

for script in /etc/profile.d/*.sh ; do
	if [ -r $script ] ; then
		. $script
	fi
done

unset pathremove pathprepend pathappend

#End /etc/profile
EOF
echo Setting up /etc/skel/.bash_profile...
cat > /etc/skel/.bash_profile << "EOF"
append() {
	local IFS=':'
	local NEWPATH
	for DIR in $PATH; do
		if [ "$DIR" != "$1" ] ; then
			NEWPATH=${NEWPATH:+$NEWPATH:}$DIR
		fi
	done
	export PATH=$NEWPATH:$1
}

if [ -f "$HOME/.bashrc" ] ; then
	source $HOME/.bashrc
fi

if [ -d "$HOME/bin" ] ; then
	append $HOME/bin
fi

unset append
EOF

echo Setting up /etc/skel/.bashrc...
cat > /etc/skel/.bashrc << "EOF"
if [ -f "/etc/bashrc" ] ; then
	source /etc/bashrc
fi
EOF

echo Setting up /etc/skel/.bash_logout
cat > /etc/skel/.bash_logout << "EOF"
#Personal Stuff to do on logout goes here. :)
EOF

echo Creating /etc/profile.d...
install --directory --mode=0755 --owner=root --group=root /etc/profile.d
echo Setting up /etc/profile.d/dircolors.sh...
cat > /etc/profile.d/dircolors.sh << "EOF"
if [ -f "/etc/dircolors" ] ; then
	eval $(dircolors -b /etc/dircolors)
	if [ -f "$HOME/.dircolors" ] ; then
		eval $(dircolors -b $HOME/.dircolors)
	fi
fi
alias ls='ls --color=auto'
EOF
echo Setting up /etc/profile.d/extrapaths.sh...
cat > /etc/profile.d/extrapaths.sh << "EOF"
if [ -d /usr/local/lib/pkgconfig ] ; then
	pathappend /usr/local/lib/pkgconfig PKG_CONFIG_PATH
fi
if [ -d /usr/local/bin ] ; then
	pathprepend /usr/local/bin
fi
if [ -d /usr/local/sbin -a $EUID -eq 0 ] ; then
	pathprepend /usr/local/sbin
fi
if [ -d ~/bin ] ; then
	pathprepend ~/bin
fi
EOF
dircolors -p > /etc/dircolors

echo Setting up /etc/profile.d/readline.sh...
cat > /etc/profile.d/readline.sh << "EOF"
if [ -z "$INPUTRC" -a ! -f "$HOME/.inputrc" ] ; then
	INPUTRC=/etc/inputrc
fi
export INPUTRC
EOF
echo Setting up /etc/profile.d/umask.sh...
cat > /etc/profile.d/umask.sh << "EOF"
if [ "$(id -gn)" = "$(id -un)" -a $EUID -gt 99 ] ; then
	umask 002
else
	umask 022
fi
EOF
echo Setting up /etc/profile.d/i18n.sh...
cat > /etc/profile.d/i18n.sh << "EOF"
export LANG=en_us.US-ASCII
EOF
echo Setting up /etc/bashrc...
cat > /etc/bashrc << "EOF"
#/etc/bashrc
export PATH=$PATH:/usr/sbin
alias ls='ls --color=auto'
NORMAL="\[\e[0m\]"
RED="\[\e[1;31m\]"
GREEN="\[\e[1;32m\]"
DGREEN="\[\e[0;32m\]"
DRED="\[\e[0;31m\]"
LBLUE="\[\e[1;34m\]"
LPURPLE="\[\e[1;35m\]"
PURPLE="\[\e[0;35m\]"
YELLOW="\[\e[1;33m\]"
DCYAN="\[\e[0;36m\]"
CYAN="\[\e[1;36m\]"
if [[ $EUID == 0 ]] ; then
	PS1="$DRED[$PURPLE\u$DRED@$DGREEN\l$DRED] $DRED<$DCYAN\w$DRED>$PURPLE#$DGREEN "
else
	PS1="$DGREEN[$GREEN\u$DGREEN@$DRED\l$DGREEN] $DGREEN<$LBLUE\w$DGREEN>$GREEN\$$DRED "
fi
EOF

echo Setting up /etc/shells
cat > /etc/shells << "EOF"
#Begin of /etc/shells
/bin/sh
/bin/bash
EOF

cd /mnt/usb/scripts/packages
echo Setting up /etc/issue...
rm /etc/issue
cp usersys-req/issue /etc/issue
echo Done!
