"#####表示設定#####
set number "行番号を表示する
set title "編集中のファイル名を表示
set showmatch "括弧入力時の対応する括弧を表示
syntax on "コードの色分け
set tabstop=4 "インデントをスペース4つ分に設定
set smartindent "オートインデント
set shiftwidth=4 "自動的にできるインデントを変更
set expandtab

"#####検索設定#####
set ignorecase "大文字/小文字の区別なく検索する
set smartcase "検索文字列に大文字が含まれている場合は区別して検索する
set wrapscan "検索時に最後まで行ったら最初に戻る

set termguicolors
set clipboard=unnamed
"検索時のハイライト
set hlsearch

"現在あるカーソルをハイライト
set cursorline

autocmd BufNewFile *.cpp 0r $HOME/.config/nvim/template/cpp.txt "cppを開いたときに自動的に読み込む
set backspace=indent,eol,start

colorscheme iceberg
noremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l
inoremap <silent> jj <Esc>

tnoremap <silent> jj <C-\><C-n>

"ファイルを閉じても変更履歴が残るように設定
if has('persistent_undo')
	let undo_path = expand('~/.config/nvim/undo')
	exe 'set undodir=' .. undo_path
	set undofile
endif

if &compatible
   set nocompatible
 endif
 set runtimepath+=~/.cache/dein/repos/github.com/Shougo/dein.vim
 if dein#load_state('~/.cache/dein')
   call dein#begin('~/.cache/dein')
   call dein#load_toml('~/.config/nvim/dein.toml', {'lazy': 0})
   call dein#load_toml('~/.config/nvim/dein_lazy.toml', {'lazy': 1})
   call dein#end()
   call dein#save_state()
 endif
 filetype plugin indent on
 syntax enable

if dein#check_install()
  call dein#install()
endif

let g:python_host_prog = expand('/usr/local/bin/python')
let g:python3_host_prog = expand('~/.pyenv/versions/neovim-3/bin/python')
