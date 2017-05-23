# .bashrc
# For configuring bash

#echo -e "$(tput bold).bashrc$(tput sgr0)"

# Talk permission
mesg y

# Default file permission
umask 077

complete -f make
complete -f c++
complete -f g++

# Solarized dircolors
eval "$(dircolors $HOME/.dircolors)"

alias g++='g++ -std=c++11'

alias kill-session="tmux kill-session"

alias trash="gvfs-trash"

alias ls='ls $LS_OPTIONS'
alias ll='ls -l'
alias lsa='ls -A'
alias lla='ls -lA'

alias tree='tree -C'

alias if22c.sh=/var2/home/fire/fire22/install_fire22_config.sh
