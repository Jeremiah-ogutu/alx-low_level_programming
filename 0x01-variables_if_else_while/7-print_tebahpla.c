#include <stdio.h>
/**
 * main-alphabets in reverse from Z to A
 *
 * Return: 0 (success);
 */
int main(void)
{
	char alphabetReverse;

	for (alphabetReverse = 'z' ; alphabetReverse >= 'a' ; alphabetReverse--)
		putchar(alphabetReverse);
	putchar('\n');
	return (0);
}
