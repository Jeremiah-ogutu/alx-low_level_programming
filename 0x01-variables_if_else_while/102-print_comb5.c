#include <stdio.h>
/**
 * main-combinations of two two-digit numbers.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int firstTwoDigit;
	int secondTwoDigit;

	for (firstTwoDigit = 0; firstTwoDigit <= 99; firstTwoDigit++)
	{
		for (secondTwoDigit = firstTwoDigit; secondTwoDigit <= 99; secondTwoDigit++)
		{
			int tens_firstTwoDigit = firstTwoDigit / 10;
			int ones_firstTwoDigit = firstTwoDigit % 10;
			int tens_secondTwoDigit = secondTwoDigit / 10;
			int ones_secondTwoDigit = secondTwoDigit % 10;

			putchar('0' + tens_firstTwoDigit);
			putchar('0' + ones_firstTwoDigit);
			putchar(' ');
			putchar('0' + tens_secondTwoDigit);
			putchar('0' + ones_secondTwoDigit);

			if (firstTwoDigit != 99 || secondTwoDigit != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
