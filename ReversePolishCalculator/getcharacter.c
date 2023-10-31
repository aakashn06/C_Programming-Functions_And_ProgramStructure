#define BUFSIZE 100

char buf[BUFSIZE]; /* Buffer for ungetCharacter*/
int bufp = 0;   /* next free position in buf*/

int getCharacter(void) /* get a (possibly pushed back) character*/
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}

void ungetCharacter(int c)  /* push character back on input */
{
	if (bufp >= BUFSIZE)
		printf("Ungetcharacter : too many characters\n");
	else
		buf[bufp++] = c;
}