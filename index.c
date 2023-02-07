// Venessa Kuchenik
// October 10, 2022
// CSE 224
// PA2
// **************************************************************************
// This is the main function of the Word Index Program which will read in a 
// file and count the number of occurances of a list of pre-determined words.
// **************************************************************************

#include "index.h"

void main()
{
	char keyWords[100][32], word[32];
	int numWords, count[100];

	numWords = readKeyWords( "keywords.txt", keyWords ); // stores keywords in 2D array and returns
	{
		if( numWords == -1 )
		{
			printf("File couldn't be opened.\n");	// if -1, file couldn't open, prints err message 
			return;					// and returns from index.c
		}		
	}
	
	while( getWord( word ) != NULL )  // tally keywords (when applicable) until getWord retunrs a NULL (i.e. EOF)
	{
		tally( word, keyWords, count, numWords ); // silently keeps track of count
	}

	displayResults( keyWords, count, numWords );	// once getWord returns null, results will be printed
							// and index.c will return
	return;		
}
