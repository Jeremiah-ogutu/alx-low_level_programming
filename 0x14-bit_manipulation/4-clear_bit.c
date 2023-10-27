#include "main.h"

/**
 * clear_bit - function that set value to bit 0 at agiven inde
 * @n:pointer of unsigned int
 * @index: the given index
 *
 * Return:1 success else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = 1UL << index;

	if (index >= (sizeof(unsigned long int) * 8))
	{
		return (-1);
	}

	mask = ~mask;

	*n &= mask;

	return (1);
}
