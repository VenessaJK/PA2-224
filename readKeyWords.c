// Venessa Kuchenik
// October 10, 2022
// CSE 224
// PA2
// ****************************************************************
// This is a read key words function which will read in from a file
// and store the words in the file into a 2D array named keyWords.
// ****************************************************************

#include "index.h"

int readKeyWords( char *filename, char keyWords [100][32])
{
	int i, j, k, numWords=0;
	char input[32], *status;

	FILE *fp;
	fp = fopen( filename, "r");	// opening file
	if( fp == NULL )
	{
		return( -1 );
	}
	
	for( k=0; k < 100; k++)	// uses fgets to read from stdin, one line at a time, and stores in keywords
	{
		status = fgets( input, 32, fp );
		if( status == NULL )	// checks if fgets has reached EOF/end of input
		{
			fclose( fp );	// closing file
			return( k );
		}
		
		i = strlen(input) - 1;	// finding the index value of \n
		input[i] = '\0';	// replacing \n with \0
		for( j=0; j < i; j++)	// converting all characters to uppercase
		{
			input[j] = toupper( input[j] );
		}

		strcpy( keyWords[k], input );	// copying the string from input into keywords
		
//		numWords++;	// keeping track of number of keywords in file
	}
}
