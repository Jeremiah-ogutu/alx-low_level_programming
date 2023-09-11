#include <stdio.h>
/**
 * main-different combinations of three digits.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int numberOne;
	int numberTwo;
	int numberThree;

	for (numberOne = 0; numberOne < 8; numberOne++)
	{
	for (numberTwo = numberOne + 1; numberTwo < 9; numberTwo++)
	{
		for (numberThree = numberTwo + 1; numberThree < 10; numberThree++)
		{
			putchar('0' + numberOne);
			putchar('0' + numberTwo);
			putchar('0' + numberThree);
			if (numberOne != 7 || numberTwo != 8 || numberThree != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	}
	putchar('\n');
	return (0);
}
