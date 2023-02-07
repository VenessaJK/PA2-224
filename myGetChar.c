// Venessa Kuchenik
// October 10, 2022
// CSE 224
// PA2
// ******************************************************************************
// This is a my get char function will take characters from stdin  and remove any 
// non-alphanumeric characters or whitespaces, and capatalize everything
// ******************************************************************************

#include "index.h"

int myGetChar( )
{
	int c;

	while( 1 )	// infinitely loops bc will eventually break if c is a space or char
	{	
		c = getchar( );	// store first char from stream 
		if( c == EOF )	// if c is EOF, return EOF 
		{
			return EOF;
		}
		if( isspace(c) != 0 || isalpha(c) != 0 ) // if c is space or alpha, return c
		{
			c = toupper(c);	// converts only lowercase chars to upper, all else returns the same
			return c;
		}
	}
}
