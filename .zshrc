# Enable Powerlevel10k instant prompt. Should stay close to the top of ~/.zshrc.
# Initialization code that may require console input (password prompts, [y/n]
# confirmations, etc.) must go above this block; everything else may go below.
if [[ -r "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh" ]]; then
  source "${XDG_CACHE_HOME:-$HOME/.cache}/p10k-instant-prompt-${(%):-%n}.zsh"
fi

# If you come from bash you might have to change your $PATH.
# export PATH=$HOME/bin:/usr/local/bin:$PATH

# Path to your oh-my-zsh installation.
export ZSH="$HOME/.oh-my-zsh"

# Set name of the theme to load --- if set to "random", it will
# load a random theme each time oh-my-zsh is loaded, in which case,
# to know which specific one was loaded, run: echo $RANDOM_THEME
# See https://github.com/robbyrussell/oh-my-zsh/wiki/Themes
ZSH_THEME="powerlevel10k/powerlevel10k"

plugins=(
    git
    zsh-autosuggestions
)

source $ZSH/oh-my-zsh.sh

alias ls='lsd'
alias dcb='docker compose build'
alias dcu='docker compose up'
alias dcud='docker compose up -d'
alias dcd='docker compose down'
alias icloud="$HOME/Library/Mobile\ Documents/com\~apple\~CloudDocs"
alias class="$HOME/Library/Mobile\ Documents/com\~apple\~CloudDocs/授業メモ/3年/後期"


export PATH=/usr/local/bin:$PATH
export PATH="$PATH:/Applications/Visual Studio Code.app/Contents/Resources/app/bin"
prompt_context() {}

#if zsh start,tmux start
[[ -z "$TMUX" && ! -z "$PS1" && $TERM_PROGRAM != "vscode" ]] && tmux


# To customize prompt, run `p10k configure` or edit ~/.p10k.zsh.
[[ ! -f ~/.p10k.zsh ]] || source ~/.p10k.zsh
