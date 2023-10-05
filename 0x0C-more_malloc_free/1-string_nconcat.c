#include "main.h"
/**
 * string_nconcat-unction that concatenates two strings
 * @s1:string 1
 * @s2:string 2
 * @n:numbers of bite
 * Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = strlen(s1) : 0;
	unsigned int len2 = strlen(s2) : 0;
	char *output;

	if (s1 == NULL)
	i	s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= len2)
		n = len2;

	output = (char *)malloc(len1 + n + 1);
	if (output == NULL)
		return (NULL);
	if (s1 != NULL)
		strcpy(output, s1);
	else
		output[0] = '\0';

	strncat(output, s2, n);
	output[len1 + n] = '\0';
	return (output);
}

