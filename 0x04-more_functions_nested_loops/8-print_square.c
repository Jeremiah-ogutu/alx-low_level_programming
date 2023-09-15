#include "main.h"
/**
 * print_square - a function ths print square of "#" character
 *
 */
void print_square(int size)
{

	int sideOne;
	int sideTwo;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (sideOne = 0 ; sideOne < size ; sideOne++)
		{
			for (sideTwo = 0 ; sideTwo < size ; sideTwo++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}

