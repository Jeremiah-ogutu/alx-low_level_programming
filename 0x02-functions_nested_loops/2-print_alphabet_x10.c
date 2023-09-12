#include "main.h"
/**
 * print_alphabet_x10- a function that prints 10 times alphabet
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int numberOfTimes;
	char alphabet;

	for (numberOfTimes = 0 ; numberOfTimes < 10 ; numberOfTimes++)
	{
		for  (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
			_putchar(alphabet);
	}
	_putchar('\n');
}


