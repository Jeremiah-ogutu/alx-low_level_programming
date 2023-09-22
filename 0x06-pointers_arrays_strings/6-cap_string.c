#include "main.h"
#include <stdio.h>
#include <ctype.h>
/**
 * cap_string- function that capitalizes all words of a string.
 * @string:this are the capitalised letters
 *
 * Return:capital
 */
char *cap_string(char *string)
{

	char startPoint = ' ';
	int i;

	for (i = 0 ; string[i] ; i++)
	{
		char charSpecial = string[i];

		if (charSpecial == ' ' || charSpecial == '\t' || charSpecial == '\n' || charSpecial == ',' || charSpecial == ';' || charSpecial == '.' || charSpecial == '!' || charSpecial == '?' || charSpecial == '"' || charSpecial == '(' || charSpecial == ')' || charSpecial == '{' || charSpecial == '}')
		{
			startPoint = charSpecial;
		}
		else
		{
			if (startPoint == ' ')
			{
				string[i] = toupper(charSpecial);
			}
			startPoint = charSpecial;
		}
	}
	return (string);
}
