#include "main.h"
/**
 * is_prime_number -function that  Checks if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	else if
		(n <= 3)
		{
			return (1);
		}
	else if
		(n % 2 == 0 || n % 3 == 0)
		{
			return (0);
		}
	else
	{
		if ((n % 6 == 1 || n % 6 == 5) &&
				(n % 5 != 0) && (n % 7 != 0) && (n % 11 != 0))
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
