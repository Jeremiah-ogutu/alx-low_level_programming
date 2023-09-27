#include "main.h"
/**
 * factorail-fuction that returns fuctorial of a given number
 * @n:is the given  number
 * Return:the factorial -1 error 0 success
 */
int factorail(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if
		(n == 0 || n == 1)
		{
			return (1);
		}
	else
	{
		return ((n) * factorail(n - 1));
	}
}

