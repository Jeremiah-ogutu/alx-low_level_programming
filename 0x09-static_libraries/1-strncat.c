#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest:the destination
 * @src:the source
 * @n:number of string
 * Return:dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int destLen = 0;
	int charLen;
	int srcPosition =0;

	for (charLen = 0 ; dest[charLen] != '\0' ; charLen++)
		destLen++;
	for (charLen = 0 ; charLen < n && src[srcPosition] != '\0' ; charLen++, srcPosition++)
	{
		dest[destLen + charLen] = src[srcPosition];
	}
	dest[destLen + charLen] = '\0';
	return (dest);
}
