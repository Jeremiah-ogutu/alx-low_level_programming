#include <stdio.h>

/**
 * main-alphabet in lower and upercase
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	for (alphabet = 'A' ; alphabet <= 'Z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');

	return (0);
}
