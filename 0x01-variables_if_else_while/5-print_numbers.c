#include <stdio.h>
/**
 * main-single digit numbers of base 10
 *
 * Return: 0 (success)
 */
int main(void)
{
	int base;

	for (base = '0' ; base <= '9' ; base++)
		putchar(base);
	putchar('\n');
	return (0);
}
