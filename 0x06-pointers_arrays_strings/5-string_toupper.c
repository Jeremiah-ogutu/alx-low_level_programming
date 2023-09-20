#include "main.h"
/**
 * string_toupper-function that changes all lowercase letters to upper
 *@upper:pointer
 *Return:upper
*/
char *string_toupper(char *upper)
{
	int lower;

	for (lower = 0 ; upper[lower] != '\0'; lower++)
	{
		if (upper[lower] >= 'a' && upper[lower] <= 'z')
		{
			upper[lower] = upper[lower] - ('a' - 'A');
		}
	}
	return (upper);
}
