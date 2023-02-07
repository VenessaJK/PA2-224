// Venessa Kuchenik
// October 10, 2022
// CSE 224
// PA2
// ************************************************
// This is a tally function that will keep track of
// the number of times a word matches a keyword.
// ************************************************

#include "index.h"

void tally( char *word, char keyWords[100][32], int count[100], int numWords)
{
	int i=0, status;

	for( i; i < numWords; i++ )	// compare word to each keyword 
	{
		status = strcmp( word, keyWords[i] );
		if( status == 0 )	// if strings are equal increase count for keyword[i]
		{
			count[i]++;	// count and keywords are kept in sync so 'i' can be used for both
		}
	}
	return;	
}
