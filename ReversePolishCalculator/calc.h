#define MAXOP 100 /* MAX SIZE OF OPERATOR OR OPERAND*/
#define NUMBER '0' /* signal that a number was found*/

extern int getop(char[]);
extern void pushOp(double);
extern double popOp(void);
extern int getCharacter(void);
extern void ungetCharacter(int);
extern double asciiToFloat(char[]);