if has('win32')
"set gui font/colors:
set gfn=Consolas:h10
"colorscheme desert
else
	"if has('unix')
		set guifont=WenQuanYi\ Micro\ Hei\ Mono\ 10
	"endif
endif

" GVIM Windows corrections:
" Allow arrow keys to work in visual mode:
:set keymodel-=stopsel
if has('win32')
    :noremap <c-v> <c-v>
endif

if has ('win32') || has ('win64')
    so ~/.vim/.eclimrc
else
    "eclimd -f ~/.vim/.eclimrc
endif
