#include "main.h"
/**
 * _strchr - fuction that allocate character in string
 * @c:the character tope allocated
 * @s:string
 * Return:pointer or NULL if no poniter found
 */

char *_strchr(char *s, char c)
{

	int indexChar;

	for (indexChar = 0; s[indexChar] != '\0'; indexChar++)
	{
		if (s[indexChar] == c)
		{
			return (&s[indexChar]);
		}
	}
	return (NULL);
}
