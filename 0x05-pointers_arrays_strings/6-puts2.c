#include "main.h"
/**
 * puts2 - print char of string
 * @str: string to be printed
 * Return void
 */
void puts2(char *str)
{
	int i;

	for (i = 0 ; str[i] != '\0'; i++)
	{
		if (i % 2 == 0)
			_putchar(str[i]);
	}
}

