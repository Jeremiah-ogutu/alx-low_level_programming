#include "main.h"
/**
 * print_alphabet-function that prints the alphabet, followed by a new line.
 *
 * Return: 0 (success)
 */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		_putchar(alphabet);
	_putchar('\n');
}
