#include "main.h"
/**
 * _memcpy - fuction that copies memory
 * @dest:destination of the memory
 * @src:the sorce of the memory
 *@n:the memor:set number
 * Return: pointer of dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *mainDest = dest;

	for (int index = 0; index < n ; index++)
	{
		*dest = *src;
		dest;
		src++;
	}
	return (dest);
}
