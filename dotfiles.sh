#!/bin/sh

ln -sf ~/dotfiles/.vimrc ~/.vimrc
mkdir -p ~/.vim/colors
ln -sf ~/dotfiles/colors/kuroi.vim ~/.vim/colors/kuroi.vim
ln -sf ~/dotfiles/.zshrc ~/.zshrc
ln -sf ~/dotfiles/nvim ~/.config/nvim
ln -sf ~/dotfiles/.tmux.conf ~/.tmux.conf
ln -sf ~/dotfiles/.editorconfig ~/.editorconfig
ln -sf ~/dotfiles/git ~/.config
ln -sf ~/dotfiles/.ideavimrc ~/.ideavimrc
