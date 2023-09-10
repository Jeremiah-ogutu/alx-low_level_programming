#include <stdio.h>
/**
 * main-print all aphabets except Q and E
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		if (alphabet != 'q' && alphabet != 'e')
			putchar(alphabet);
	putchar('\n');

	return (0);
}
