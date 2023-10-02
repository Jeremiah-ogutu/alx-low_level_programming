#include "main.h"
/**
 * create_array -fuction that create an array of char and intializes it
 * @c:the char to be initialized
 * @size:size of array
 * Return:NULL
 */
char *create_array(unsigned int size, char c)
{
	unsigned int len;
	char *theArray;

	if (size == 0)
		return (NULL);
	theArray = malloc(sizeof(char) * size);
	if (theArray == NULL)
		return (NULL);
	for (len = 0 ; len < size ; len++)
		theArray[len] = c;
	return (theArray);
}
