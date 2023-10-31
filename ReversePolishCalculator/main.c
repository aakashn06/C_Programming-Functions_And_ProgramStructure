#include <stdio.h>
#include <stdlib.h>
#include "calc.h"



/* reverse Polish Calculator*/
void main()
{
	int type;
	double op2;
	char s[MAXOP];

	while ((type = getop(s)) != EOF) {
		switch (type) {
		case NUMBER:
			pushOp(asciiToFloat(s));
			break;
		case '+' :
			pushOp(popOp() + popOp());
			break;
		case '*':
			pushOp(popOp() * popOp());
			break;
		case '-' :
			op2 = popOp();
			pushOp(popOp() - op2);
			break;
		case '/' :
			op2 = popOp();
			if (op2 != 0.0)
				pushOp(popOp() / op2);
			else
				printf("error : Zero division\n");
			break;
		case '\n' :
			printf("\t%.8g\n", popOp());
			break;
		default :
			printf("error : Unknown command %s\n", s);
			break;
		}
	}
}