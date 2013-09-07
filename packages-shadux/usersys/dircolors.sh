if [ -f "/etc/dircolors" ] ; then
        eval $(dircolors -b /etc/dircolors)
        if [ -f "$HOME/.dircolors" ] ; then
                eval $(dircolors -b $HOME/.dircolors)
        fi
fi
alias ls='ls --color=auto'

