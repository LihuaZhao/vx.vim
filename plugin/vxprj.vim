function! CreateVsb ()
   " Get the bytecode.
   let vsblog = system("crvsb")
   " Open a new split and set it up.
   
   vsplit __Potion_Bytecode__
   normal! ggdG
   setlocal filetype=log
   setlocal buftype=nofile
   
   " Insert the bytecode.
   call append(0, split(vsblog, '\v\n'))
endfunction

nnoremap <buffer> <leader>cv :call CreateVsb()<cr>
