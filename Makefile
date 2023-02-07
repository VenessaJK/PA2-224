index: index.o getWord.o myGetChar.o readKeyWords.o tally.o displayResults.o
	gcc -o index index.o getWord.o myGetChar.o readKeyWords.o tally.o displayResults.o
tally.o: tally.c index.h
	gcc -c tally.c
index.o: index.c index.h
	gcc -c index.c
getWord.o: getWord.c index.h
	gcc -c getWord.c 
myGetChar.o: myGetChar.c index.h
	gcc -c myGetChar.c
readKeyWords.o: readKeyWords.c index.h
	gcc -c readKeyWords.c
displayResults.o: displayResults.c index.h
	gcc -c displayResults.c

clean:
	rm index index.o getWord.o myGetChar.o readKeyWords.o tally.o displayResults.o