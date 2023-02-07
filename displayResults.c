// Venessa Kuchenik
// 10/17/2022
// CSE 224
// PA2
// ******************************************************
// This is a display results function which will list all
// the key words, and the number of times they were seen.
// ******************************************************

#include "index.h"

void displayResults( char keyWords[100][32], int count[100], int numWords )
{
	int i;

	printf("These are the keywords and the number of times they occured:\n");
	
	for( i=0; i < numWords; i++ )	// prints the 2D keywords array and the count next to it
	{
		printf("%s:   ", keyWords[i]);	// bc keywords and count are in sync, don't need any
		printf("%d\n", count[i]);	// kind of filtering 
	}
	return;
}
