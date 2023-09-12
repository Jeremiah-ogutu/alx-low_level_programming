#include "main.h"
#include <stdio.h>
/**
 * times_table -a function that prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int row;
	int column;
	int result;

	for (row = 0 ; row < 10 ; row++)
	{
		for (column = 0 ; column < 10 ; column++)
		{
			result = row * column;
			printf("%4d, ", result);
		}
		printf("\n");
	}
}
