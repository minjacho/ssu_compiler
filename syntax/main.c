#include "ssu_syntax.h"
#include "ssu_semantic.h"
#include "type.h"
#include "y.tab.h"
#include <stdio.h>

A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;
A_NODE *root;
A_ID *current_id=NIL;
void code_generation(A_NODE *);
int syntax_err=0;
int semantic_err=0;
int line_no=1;
int current_level=0;
int fout;
extern int gen_err;
int main() {
	fout = fopen("code.asm", "w");
	initialize();
	yyparse();
	if (syntax_err)
		exit(1);
	print_ast(root); // print syntax tree and tables
	semantic_analysis(root);
	// if (semantic_error)
	// {
	// 	printf("sem analysis fail\n");
	// 	exit(1);
	// }
	print_sem_ast(root);
	printf("sem analysis done\n");
	code_generation(root);
	if (gen_err)
		exit(1);
	exit(0);
}
