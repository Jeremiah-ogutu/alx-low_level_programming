#include "main.h"

/**
 * more_numbers -prints numbers from 0-14 repeted
 *
 */
void more_numbers(void)
{
	int number;
	int count;

	for (count = 0; count < 10; count++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number >= 10)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}


