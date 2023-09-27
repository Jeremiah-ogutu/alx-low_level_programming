#include "main.h"
/**
 *_sqrt_recursion - fuction that the natural square root of a number
 * @n:the number
 *
 * Return:nutural square root if no -1
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if
		(n == 0 || n == 1)
		{
			return (n);
		}
	else
	{
		int guess = 1;

		while
			(guess * guess < n)
		{
			guess++;
		}
		if
			(guess * guess == n)
			{
				return (guess);
			}
		else
		{
			return (-1);
		}
	}
}

