#include "ssu_syntax.h"
#include "type.h"
#include "y.tab.h"

A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;
A_NODE *root;
A_ID *current_id=NIL;
extern FILE *yyin;
int syntax_err=0;
int line_no=1;
int current_level=0;
int main() {
	yyin = fopen("test1.c", "r");
	initialize();
	yyparse();
	if (syntax_err)
		exit(1);
	print_ast(root); // print syntax tree and tables
	exit(0);
}
/*
	initialize();
	yyparse();
	if (syntax_err) exit(1);
	print_ast(root);
	semantic_analysis(root);
	if (semantic_err) exit(1);
	print_sem_ast(root);
*/
