"Function highlighting:
"syn match cCommunicator "MPI_[A-Z][A-Z_a-z2 ]*("me=e-1
"syn match cCommunicator "MPIO_[A-Z][A-Z_a-z ]*("me=e-1
"syn match cCommunicator "pvm_[a-z ]*("me=e-1
"syn match cCommunicator "MP_[A-Z_a-z ]*("me=e-1
"
"syn keyword cType MPI_Group MPI_Status MPI_Request MPI_Win MPI_Aint
"syn keyword cType MPI_Info MPI_Op MPI_Datatype MPI_Comm
"
"command -nargs=+ HiLink hi def link <args>
"
"hi link cCommunicator Communicator

" Highlight Class and Function names

"hi def cCustomFunc  guifg=yellowgreen
"hi def cCustomClass gui=reverse guifg=#00FFFF

" Working function highlighting!
"hi functionname guifg=red
"syntax match functionname '\S*('me=e-1

"syn match cFunction '\h\w*\ze\s*('
"hi link cFunction Function

 "Working function highlighting!! Color reference: http://vim.wikia.com/wiki/Xterm256_color_names_for_console_Vim
 syn match    cCustomParen    "?=(" contains=cParen,cCppParen
 syn match    cCustomFunc     "\w\+\s*(\@=" contains=cCustomParen
 syn match    cCustomScope    "::"
 syn match    cCustomClass    "\w\+\s*::" contains=cCustomScope

 if has('gui_running')
     "optional: gui=bold
     hi def cCustomFunc  guifg=DodgerBlue ctermfg=162
     hi def link cCustomClass Function
 else
     " set default other configurations!
     hi def cCustomFunc ctermfg=162
     hi def link cCustomClass Function
 endif

" Tab = 4 spaces - if need normal tab, do CTRL-V, Tab
" size of a hard tabstop
:set tabstop=4
" size of an indent
:set shiftwidth=4
" always uses spaces instead of tab characters
:set expandtab
" make tab insert indents instead of tabs at the begining of a line
:set smarttab

