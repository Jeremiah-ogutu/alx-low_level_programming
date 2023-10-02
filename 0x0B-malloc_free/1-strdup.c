#include "main.h"
#include <string.h>
/**
 * _strdup-fuction that return a pointer in anew space
 * @str:its the sring used as parameter
 * Return: null
 */
char *_strdup(char *str)
{
	char *hold;
	int len;

	if (str == NULL)
	{
		return (NULL);
	}

	len = strlen(str);
	hold = (char *)malloc((len + 1) * sizeof(char));
	if (hold == NULL)
	{
		return (NULL);
	}
	strcpy(hold, str);
	return (hold);
}

