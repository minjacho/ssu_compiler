%start program
%token 	IDENTIFIER TYPE_IDENTIFIER FLOAT_CONSTANT INTEGER_CONSTANT
		CHARACTER_CONSTANT STRING_LITERAL PLUS MINUS PLUSPLUS
		MINUSMINUS BAR AMP BARBAR AMPAMP ARROW
		SEMICOLON LSS GTR LEQ GEQ EQL NEQ DOTDOTDOT
		LP RP LB RB LR RR PERIOD COMMA EXCL STAR SLASH PERCENT ASSIGN
		COLON AUTO_SYM STATIC_SYM TYPEDEF_SYM
		STRUCT_SYM ENUM_SYM SIZEOF_SYM UNION_SYM
		IF_SYM ELSE_SYM WHILE_SYM DO_SYM FOR_SYM CONTIUNE_SYM
		BREAK_SYM RETURN_SYM SWITCH_SYM CASE_SYM DEFAULT_SYM
%%
program : translation_unit
		;
translation_unit : external_declaration
				 | translation_unit external_declaration;
external_declaration : function_definiton
					 | declaration;
function_definition : declaration_specifiers declarator compound_statement
					| declarator compound_statement;
d
