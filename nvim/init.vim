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

"現在開いてるファイルのパスを表示
set statusline+=%F

"現在あるカーソルをハイライト
set cursorline

"折り畳みしない
set foldmethod=syntax
let perl_fold=1
set foldlevel=100


autocmd BufNewFile *.cpp 0r $HOME/.config/nvim/template/cpp.txt "cppを開いたときに自動的に読み込む
set backspace=indent,eol,start

"colorscheme iceberg
colorscheme kuroi
noremap <C-h> <C-w>h
nnoremap <C-j> <C-w>j
nnoremap <C-k> <C-w>k
nnoremap <C-l> <C-w>l
inoremap <silent> <C-j> <Esc>
inoremap <silent> jj <Esc>

tnoremap <silent> jj <C-\><C-n>

"ファイルを閉じても変更履歴が残るように設定
if has('persistent_undo')
	let undo_path = expand('~/.config/nvim/undo')
	exe 'set undodir=' .. undo_path
	set undofile
endif

