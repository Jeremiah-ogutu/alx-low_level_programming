#include "main.h"
#include <string.h>
/**
 * str_concat - fuction that concatinate two strings
 * @s1:string one
 * @s2:string two
 * Return:NULL
 */
char *str_concat(char *s1, char *s2)
{
	int len1;
	int len2;
	char *concatenated;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = NULL;
	}

	len1 = strlen(s1);
	len2 = strlen(s2);

	concatenated = (char *)malloc((len1 + len2 + 1) * sizeof(char));

	if (concatenated == NULL)
	{
		return (NULL);
	}
	strcpy(concatenated, s1);
	strcat(concatenated, s2);
	return (concatenated);
}

