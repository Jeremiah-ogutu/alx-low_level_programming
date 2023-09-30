#include "main.h"
#include <limits.h>
/**
 * _atoi-function that convert a string to an integer.
 * @s:the string
 * Return:0
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;

	if (*s == '-')
	{
		sign = -1;
		s++;
	}
	else if
		(*s == '+')
		{
			s++;
		}
	for (; (*s >= '0' && *s <= '9'); s++)
	{
		if (result > (INT_MAX - (*s - '0')) / 10)
		{
			return (sign == 1) ? INT_MAX : INT_MIN;
		}
		 result = result * 10 + (*s - '0');
	}
	return (result * sign);
}
