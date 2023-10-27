#include "main.h"

/**
 * set_bit - set the value of abit at agiven index
 * @n:poiniter to the unsigned int
 * @index: the index of the bit to set
 * Return:1 success -1 error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}
	*n = *n | (1UL << index);

	return (1);
}
