#include "mystring.h"
#include <assert.h>
#include <sys/types.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/*
 * The following are simple tests to help you.
 * You should develop more extensive tests to try and find bugs.
 */
int main()
{
	const int SIZE = 100;
	char buffer[SIZE];

	assert(mystrlen("cmpt 300") == 8);
	assert(mystrlen("") == 0);
	//non ascii characters?
	//super long string

	mystrcpy(buffer, "adam");
	printf("%s \n", buffer);
	assert(mystrcmp(buffer, "adam") == 0);
	assert(mystrcmp(buffer, "ADAM") != 0);
	assert(mystrcmp ("I love coding", "I love coding") == 0);

	char *dupStr = mystrdup(buffer);
	assert (!mystrcmp(buffer, dupStr));
	assert (buffer != dupStr);

	if (dupStr != NULL)
		free (dupStr);

	printf ("\nPassed VERY simple tests, remember to develop more tests.\n");

	return 0;
}

