"#####表示設定#####
set number "行番号を表示する
set title "編集中のファイル名を表示
set showmatch "括弧入力時の対応する括弧を表示
syntax on "コードの色分け
set tabstop=4 "インデントをスペース4つ分に設定
set smartindent "オートインデント
set shiftwidth=4 "自動的にできるインデントを変更

"#####検索設定#####
set ignorecase "大文字/小文字の区別なく検索する
set smartcase "検索文字列に大文字が含まれている場合は区別して検索する
set wrapscan "検索時に最後まで行ったら最初に戻る

set clipboard+=unnamed

autocmd BufNewFile *.cpp 0r $HOME/.vim/template/cpp.txt "cppを開いたときに自動的に読み込む
set backspace=indent,eol,start

inoremap <silent> jj <ESC>
tnoremap <ESC> <C-\><C-n>

set t_Co=256
set background=dark
colorschem kuroi
