// Venessa Kuchenik
// October 10, 2022
// CSE 224
// PA2
// **************************************************************
// This is a get word function that takes uses myGetChar to build
// a word and store it in the variable passed to the function.    
// **************************************************************

#include "index.h"

char *getWord( char *word )
{
	int c, i;

	while(1)	//loop infinetly until all the intial whitespaces are gone
	{
		c = myGetChar();
		if( c == EOF )
		{
			return NULL;	// returns -1 
		}
		if( isspace(c) == 0 )	// if c !=' ' then it is an alpha char
		{
			word[0] = c;	// and bc it is a char, I need to store it in the index 0
			break;		// bfr calling myGetChar again in the next loop
		}
	}		
	for( i=1; i < 32; i++)		//i=1 bc we will now looking at the second char
	{
		c = myGetChar();
		if( isspace(c) != 0 || c == EOF )	// if c=' ' or NULL in the second loop, that signifies
		{					// the end of a word
			word[i] = '\0';	// puts null at end of word
			return( word ); 
		}
		word[i] = c;
		word[32] = '\0';	// the last char will always be set to null
	}
	return( word );	// this is a net for when a word is bigger than 32 char, will return first 32 char of word
}