#include <stdio.h>
/**
 * main-program that prints all possible combinations of single-digit numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int singleDigit;

	for (singleDigit = '0' ; singleDigit <= '9' ; singleDigit++)
	{
		putchar(singleDigit);
		if (singleDigit != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
