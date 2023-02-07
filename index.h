#include <stdio.h>
#include <string.h>
#include <ctype.h>

int readKeyWords( char *, char keyWords[100][32]);
void tally( char *, char keyWords[100][32], int count[100], int);
char *getWord( char *);
int myGetChar();
void displayResults( char keyWords[100][32], int count[100], int);
