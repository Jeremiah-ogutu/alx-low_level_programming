#include "main.h"
/**
 * _memset - function that fills memory with a constant byte.
 * @n:bytes
 * @s:pointer
 * @b:constant byte
 * Return:Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *mainPointer = s;

	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (mainPointer);
}
