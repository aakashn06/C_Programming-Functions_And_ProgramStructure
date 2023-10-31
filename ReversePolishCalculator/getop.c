#include <ctype.h>
#include <stdio.h>
#include "calc.h"

/* get next operator or numeric operand*/
int getop(char s[])
{
	int i, c;

	while ((s[0] = c = getCharacter()) == ' ' || c == '\t')
		;
	s[1] = '\0';
	if (!isdigit(c) && c != '.')
		return c;       /* not a number*/
	i = 0;
	if (isdigit(c))  /* collect integer part*/
		while (isdigit(s[++i] = c = getch()))
			;
	if (c == '.')    /* collect fraction part*/
		while (isdigit(s[++i] = c = getch()))
			;
	s[i] = '\0';
	if (c != EOF)
		ungetCharacter(c);
	return NUMBER;
}
