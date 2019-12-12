function! hook#add#language_client_neovim#load() abort
  let g:LanguageClient_autoStart         = 1 " NeoVim起動時にLSPを自動スタート
  let g:LanguageClient_diagnosticsEnable = 0 " シンタックスチェックをOFF

  let g:LanguageClient_serverCommands = {}
  " `eclipse.jdt.ls`で利用する、データ保存先ディレクトリの存在確認
  " ディレクトリが存在しない場合は作成する
  let l:jdt_lsp_data_dir = expand('~/eclipse.jdt.ls') . "/jdt-data"
  if !isdirectory(l:jdt_lsp_data_dir)
    call mkdir(l:jdt_lsp_data_dir, "p")
  endif
  " LSPの起動設定
  " `configuration`オプションはOSごとに別の設定にする必要がある。
  " `eclipse.jdt.ls`インストールディレクトリに、 `config_linux`, `config_mac`, `config_win` というディレクトリがあるので、それぞれOSに併せて設定ファイルパスを指定する。
  let g:LanguageClient_serverCommands["java"] = [
        \ 'java',
        \ '-agentlib:jdwp=transport=dt_socket,server=y,suspend=n,address=1044',
        \ '-Declipse.application=org.eclipse.jdt.ls.core.id1',
        \ '-Dosgi.bundles.defaultStartLevel=4',
        \ '-Declipse.product=org.eclipse.jdt.ls.core.product',
        \ '-Dlog.protocol=true',
        \ '-Dlog.level=ALL',
        \ '-noverify',
        \ '-Xmx1G',
        \ '-jar',
        \ expand('~/eclipse.jdt.ls') . '/jdt-lsp/plugins/org.eclipse.equinox.launcher_1.5.0.v20180207-1446.jar',
        \ '-configuration',
        \ expand('~/eclipse.jdt.ls') . '/jdt-lsp/config_mac',
        \ '-data',
        \ l:jdt_lsp_data_dir]

  " キーマッピング
  nnoremap <silent> K :call LanguageClient_textDocument_hover()<CR>
  nnoremap <silent> gd :call LanguageClient_textDocument_definition()<CR>
  nnoremap <silent> <F2> :call LanguageClient_textDocument_rename()<CR>
  nnoremap <silent> <F3> :call LanguageClient_textDocument_references()<CR>
endfunction
