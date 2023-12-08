#include "ssu_syntax.h"
#include "ssu_semantic.h"
#include "type.h"
#include "y.tab.h"

A_TYPE *int_type, *char_type, *void_type, *float_type, *string_type;
A_NODE *root;
A_ID *current_id=NIL;
int syntax_err=0;
int semantic_err=0;
int line_no=1;
int current_level=0;
int main() {
	initialize();
	yyparse();
	if (syntax_err)
		exit(1);
	print_ast(root); // print syntax tree and tables
	semantic_analysis(root);
	// if (semantic_error)
	// 	exit(1);
	print_sem_ast(root);

	exit(0);
}
