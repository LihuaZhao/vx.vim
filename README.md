# vx vim

VxWorks vim plugin

## What does vx.vim do?

- create file (source/header/cdf/Makefile) with WindRiver code convention template
- align Windriver code style, such indent and so on
## Good book
- http://yannesposito.com/Scratch/en/blog/Learn-Vim-Progressively/
- http://learnvimscriptthehardway.stevelosh.com/
- https://github.com/junegunn/fzf.vim


## Install

Adding the following code to ~/.vimrc, when you start vim, it will install plugin automatically.

```shell
if empty(glob('~/.vim/autoload/plug.vim'))
    silent !curl -fLo ~/.vim/autoload/plug.vim --create-dirs
      \ https://raw.githubusercontent.com/junegunn/vim-plug/master/plug.vim
    autocmd VimEnter * PlugInstall --sync | source $MYVIMRC
endif

"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
" vim-plug
" https://github.com/junegunn/vim-plug
"""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""""
call plug#begin('~/.vim/plugged')
Plug 'junegunn/fzf', { 'dir': '~/.fzf', 'do': './install --all' }
Plug 'junegunn/fzf.vim'
Plug 'LihuaZhao/vx', { 'dir': '~/.vx', 'do': './install --all' }
Plug 'LihuaZhao/vx.vim'
call plug#end()
```
### command

```shell
e: xxx.c           # auto insert source template with our latest code standard
e: xxx.c           # auto insert headder template with our latest code standard
e: xxx.sh          # auto insert shell template
e: Makefile        # auto insert Makefile template
e: layer.vsbl      # auto insert layer.vsb template
e: xxx.spec        # auto insert spec template
<leader>f          # find file under WIND_BASE
<leader>b          # switch buffer
<leader>a          # search string
```

