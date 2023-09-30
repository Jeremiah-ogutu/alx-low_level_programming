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
	unsigned int memory;

	for (memory = 0; memory < n ; memory++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	return (mainDest);
}
