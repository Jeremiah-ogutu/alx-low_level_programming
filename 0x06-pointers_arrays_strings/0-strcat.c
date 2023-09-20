#include "main.h"
/**
 *_strcat-function that concatenates two strings.
 *@dest:Destination
 *@src:Source
 *Return:Destination
 */

char *_strcat(char *dest, char *src)
{
	int destinationLength = 0;
	int sourceLength = 0;
	int numberOfchar;

	for (numberOfchar = 0 ; dest[numberOfchar] != '\0' ; numberOfchar++)
		destinationLength++;
	for (numberOfchar = 0 ; src[numberOfchar] != '\0' ; numberOfchar++)
		sourceLength++;
	for (numberOfchar = 0 ; numberOfchar <= sourceLength ; numberOfchar++)
		dest[destinationLength + numberOfchar] = src[numberOfchar];
	return (dest);
}



