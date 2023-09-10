#include <stdio.h>

/**
 * main - Print single-digit numbers of base 10.
 *
 * Return: Always 0 (success).
 */
int main(void)
{
	int singleDigit;

	for (singleDigit = '0' ; singleDigit <= '9' ; singleDigit++)
		putchar(singleDigit);
	putchar('\n');
	return (0);
}
