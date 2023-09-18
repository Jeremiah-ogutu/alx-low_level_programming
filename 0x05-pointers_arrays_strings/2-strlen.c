#include "main.h"
/**
 *_strlen-a function that return the length of a string
 * @s:the string
 * Return: the legth of the string
 */
int _strlen(char *s)
{

	int i;
	int counted = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		counted++;
	return (counted);
}

