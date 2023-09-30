#include "main.h"
/**
 * _strpbrk-function that searches a string for any set of bytes
 * @s:pointer
 * @accept:string
 *
 *Return:null
 */
char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *a = accept;

		for (; *a; a++)
		{
			if (*s == *a)
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}
