#include "main.h"
/**
 * print_rev-function that prints a string, in reverse, followed by a new line
 * @s: this the string to printed in reverse
 * Return: void
 */

void print_rev(char *s)
{
	int i;
	int countReverse = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		countReverse++;
	for (i = countReverse - 1; i >= 0 ; i--)
		_putchar(s[i]);
	_putchar('\n');
}
