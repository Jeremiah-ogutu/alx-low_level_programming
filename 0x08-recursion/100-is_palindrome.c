#include "main.h"
#include <string.h>
/**
 * is_palindrome - Checks if a string is a palindrome
 * @s: the string to be checked
 *i
 * Return: 1 if s is a palidrome 0 otherwise
 */
int is_palindrome(char *s)
{
	int forward = 0;
	int backword = strlen(s) - 1;

	while (backword < forward)
	{
		if (s[backword] != s[forward])
		{
			return (0);
		}
		forward++;
		backword--;
	}
	return (1);
}
