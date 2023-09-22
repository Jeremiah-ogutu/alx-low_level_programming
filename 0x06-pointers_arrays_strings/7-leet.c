#include "main.h"
/**
 * leet- function that encodes a string into 1337.
 * @string:the string to be encoded
 * Return:string
 */
char *leet(char *string)
{
	char *startPoint = string;

	for (; *startPoint != '\0'; startPoint++)
	{
		if (*startPoint == 'a' || *startPoint == 'A')
		{
			*startPoint = '4';
		}
		else if (*startPoint == 'e' || *startPoint == 'E')
		{
			*startPoint = '3';
		}
		else if (*startPoint == 'o' || *startPoint == 'O')
		{
			*startPoint = '0';
		}
		else if (*startPoint == 't' || *startPoint == 'T')
		{
			*startPoint = '7';
		}
		else if (*startPoint == 'l' || *startPoint == 'L')
		{
			*startPoint = '1';
		}
	}
	return (string);
}
