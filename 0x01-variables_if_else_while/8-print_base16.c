#include  <stdio.h>
/**
 * main-All base sisteen numbers
 *
 * Return: 0 (success)
 */
int main(void)
{
	int numbers;
	char alphabet;

	for (numbers = '0'; numbers <= '9'; numbers++)
		putchar(numbers);
	for (alphabet = 'a'; alphabet <= 'f'; alphabet++)
		putchar(alphabet);
	putchar('\n');
	return (0);
}
