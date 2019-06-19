nmap<silent><leader>f :Files $WIND_BASE/pkgs_v2<cr>
nmap<silent><leader>b :Buffers<cr>
nmap<silent><leader>t :Tags<cr>
nmap<silent><Leader>a :Ag<CR>

autocmd BufNewFile *.sh 0r ~/.vim/plugged/vx.vim/templates/skeleton.sh
autocmd BufNewFile *.c 0r ~/.vim/plugged/vx.vim/templates/skeleton.c
autocmd BufNewFile *.h 0r ~/.vim/plugged/vx.vim/templates/skeleton.h
autocmd BufNewFile *.spec 0r ~/.vim/plugged/vx.vim/templates/skeleton.spec
autocmd BufNewFile Makefile 0r ~/.vim/plugged/vx.vim/templates/Makefile
autocmd BufNewFile layer.vsbl 0r ~/.vim/plugged/vx.vim/templates/layer.vsbl
