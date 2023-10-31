#define MAXVAL 100 /* max depth of val stack*/

int sp = 0; /* next free stack position*/
double val[MAXVAL]; /* value stack*/

void pushOp(double f)
{
	if (sp < MAXVAL)
		val[sp++] = f;
	else
		printf("error : stack full, cant push %g\n", f);
}

double popOp(void)
{
	if (sp > 0)
		return val[--sp];
	else {
		printf("error stack empty\n");
		return 0.0;
	}

}