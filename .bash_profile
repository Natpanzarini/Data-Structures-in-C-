# .bash_profile
# For exporting variables

#echo -e "$(tput bold).bash_profile$(tput sgr0)"

# Exports a variable with new parameters while ignore duplicates
# Useful when a new interactive login shell is launched (e.g. tmux)
# @param $1 : Variable to be exported
# @param $@ : List of things to be appended to $1
export_once()
{
    local var=$1; shift
    while [ -n "$1" ]; do
        case ":${!var}:" in
            *":$1:"*) ;;
            *) export $var="${!var}:$1" ;;
        esac
        shift
    done
}

stty erase ^?
umask 077

# Source private stuff
if [ -e $HOME/.bash_private ]; then . $HOME/.bash_private; fi

if [ -z "$PS1_ID" ]; then PS1_ID='\[$(tput setaf 1)\]>'; fi

# Bash prompt string 1
export PS1=$"\[$(tput bold)\]\[$(tput setaf 1)\]\u \[$(tput setaf 7)\]\W ${PS1_ID}\[$(tput sgr0)\] "

# User
export FIRE_PUBLIC=/var2/home/fire_public
export CLASS_SITE="209.129.16.61/~dparillo"
export LS_OPTIONS='-F --color=auto --block-size=M -h'

# System
export IGNOREEOF=10
export LINES
export COLUMNS
if [ -e $HOME/.terminfo/x/xterm-256color-it ]; then
    export TERM="xterm-256color-it"
else
    export TERM="xterm-256color"
fi
export EDITOR=/usr/bin/vim
export_once PATH\
    /usr/hla\
    /var2/local/bin\
    /var2/lopt/bin\
    $FIRE_PUBLIC/bin
export_once MANPATH\
    $FIRE_PUBLIC/share/man

# C/C++
export CPATH=$HOME/include:$FIRE_PUBLIC/include
export LIBRARY_PATH=$HOME/lib
export LARCH_PATH=/usr/share/splint/lib
export CXXFLAGS="-std=c++11"

# Tmux
export TMUXIFIER_LAYOUT_PATH=$HOME/.tmux_layouts
eval "$(tmuxifier init -)"

# Wemux
export WEMUX_DIR=$FIRE_PUBLIC/share/wemux
export WEMUX=$WEMUX_DIR/wemux
export WEMUX_CONFIG=$WEMUX_DIR/wemux.conf

# LS Colors

