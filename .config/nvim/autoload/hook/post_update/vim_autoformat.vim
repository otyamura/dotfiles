function! hook#post_update#vim_autoformat#load() abort
  " `google_java_formatter`がインストールさてれているか確認
  let l:google_java_formatter = expand('~/eclipse.jdt.ls/plugins') . "/google-java-format-1.5-all-deps.jar"
  if !executable(l:google_java_formatter)
    " 未インストールの場合はjarをダウンロード
    execute "!wget https://github.com/google/google-java-format/releases/download/google-java-format-1.5/google-java-format-1.5-all-deps.jar -P " . expand('~/eclipse.jdt.ls/plugins')
  endif
endfunction
