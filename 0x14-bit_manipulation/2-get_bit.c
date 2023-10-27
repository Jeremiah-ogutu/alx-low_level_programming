#include "main.h"

/**
 * get_bit- function that returns the value of bit at agiven index
 *
 * @n:unsigned int
 *
 * @index:index of the bit to retrive
 *Return:the 1 success else -1
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	if ((n & (1UL << index)) == 0)
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
