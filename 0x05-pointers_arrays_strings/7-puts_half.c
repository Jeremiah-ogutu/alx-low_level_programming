#include "main.h"

/**
 * puts_half- function that prints half of a string.
 * @str:string to be written in half way
 * Return: void
 */
void puts_half(char *str)
{
	int i;
	int j;
	int countHalf = 0;

	for (i = 0 ; str[i] != '\0' ; i++)
		countHalf++;
	j = (countHalf - 1) / 2;
	for (i = j + 1 ; str[i] != '\0'  ; i++)
		_putchar(str[i]);
	_putchar('\n');
}
