#include <stdio.h>
/**
 * main - Print the alphabet in lowercase followed by a newline.
 *
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'a' ; alphabet <= 'z' ; alphabet++)
		putchar(alphabet);
	putchar('\n');

return (0);

}
