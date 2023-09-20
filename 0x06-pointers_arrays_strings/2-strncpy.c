#include "main.h"
/**
 * _strncpy-function that copies a string.
 * @dest:destination
 * @src:source
 * @n:the string
 * Return:dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int numberChar;

	for (numberChar = 0 ; numberChar < n && src[numberChar] != '\0' ; numberChar++)
		dest[numberChar] = src[numberChar];
	while (numberChar < n)
	{
		dest[numberChar] = '\0';
		numberChar++;
	}
	return (dest);
}

