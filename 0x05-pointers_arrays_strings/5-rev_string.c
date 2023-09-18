#include "main.h"
/**
 * rev_string-function that reverses a string.
 *@s: its the string to be reversed
 *Return:void
 */
void rev_string(char *s)
{
	int i;
	int countReverse = 0;

	for (i = 0 ; s[i] != '\0' ; i++)
		countReverse++;
	for (i = 0 ; i < countReverse / 2 ; i++)
	{
		char j;

		j = s[i];
		s[i] = s[countReverse - 1 - i];
		s[countReverse - 1 - i] = j;
	}
}
