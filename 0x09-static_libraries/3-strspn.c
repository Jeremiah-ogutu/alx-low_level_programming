#include "main.h"
/**
 * _strspn-the length of a prefix substring
 * @s:number of bytes in segment
 * @accept:original bytes
 *
 * Return:count
 */

unsigned int _strspn(char *s, char *accept)
{

	int count = 0;

	while (*s)
	{
		char *a = accept;
		int isMatch = 0;

		for (; *a; a++)
		{
			if (*s == *a)
			{
				isMatch = 1;
				break;
			}
		}
		if (!isMatch)
		{
			return (count);
		}
		count++;
		s++;
	}
	return (count);
}
