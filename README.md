# dotfiles

## setup

```
sh dotfiles.sh
```


## change shell

```
chsh -s $(which zsh)
```

## mac

### DS_Store

```
mkdir -p ~/.config/git
echo '.DS_Store' >> ~/.config/git/ignore
```

### iterm theme

```
 git clone https://github.com/dracula/iterm.git
```

### brew

```
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"
```

### font

```
brew install font-hack-nerd-font
```

### oh-my-zsh

```
sh -c "$(curl -fsSL https://raw.githubusercontent.com/robbyrussell/oh-my-zsh/master/tools/install.sh)"

git clone https://github.com/bhilburn/powerlevel9k.git ~/.oh-my-zsh/custom/themes/powerlevel9k
```

### tool

```
brew install lsd tldr rg
```
