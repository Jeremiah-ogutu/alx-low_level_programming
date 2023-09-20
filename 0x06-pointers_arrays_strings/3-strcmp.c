#include "main.h"
/**
* _strcmp-function that compares two strings.
* @s1:string 1
* @s2:string 2
* Return:0 success
*/
int _strcmp(char *s1, char *s2)
{
	int mediator;

	for (mediator = 0 ; s1[mediator] != '\0' || s2[mediator] != '\0' ; mediator++)
	{
		if (s1[mediator] != s2[mediator])
		{
			return (s1[mediator] - s2[mediator]);
		}
	}
	return (0);
}
