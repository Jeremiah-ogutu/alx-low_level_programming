#include "main.h"
/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 */
void print_numbers(void)
{
	int theNumber;

	for (theNumber = '0'; theNumber <= '9'; theNumber++)
	{
		_putchar(theNumber);
	}
	_putchar('\n');
}	
