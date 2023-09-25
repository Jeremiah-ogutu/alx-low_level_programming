#include "main.h"
/**
 * _strstr-fuction that allocate substring
 * @haystack:its the string
 * @needle:its the substring
 *
 * Return:null
 */
char *_strstr(char *haystack, char *needle)
{
	char *start = haystack;

	while (*haystack)
		{
		char *h = haystack;
		char *n = needle;

		for (; *h && *n && *h == *n; h++, n++)
		{
		}
		if (!*n)
		{
			return (start);
		}
		haystack++;
		start++;
	}
	return (NULL);
}
