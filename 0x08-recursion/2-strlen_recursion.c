#include "main.h"
/**
 * _strlen_recursion-fuction that print the length of a string
 * @s:pointer string
 *
 * Return:length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return ((1) + _strlen_recursion(s + 1));
}
