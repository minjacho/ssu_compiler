# SSU COMPILER

This repo is for ssu compiler assignments

After the first write of minajae.y, yacc -d does not work with conflicts: 1 shift/reduce.

So, I tried to fix it but I can't and also y.tab.c and y.tab.h was maken so I just continue to type minjae.l.

Because minjae.l has different format in pptx file and text book, it's hard to understand.

I found the confilct issue is occured by selection statement line so fix it. (deleted the else sym)

when I delete it, yacc run very well. so I have to fix it again to get else symbol well.

By using else_opt_statement, I could fix it.

But in lex, I could not generate yylex with lex.

