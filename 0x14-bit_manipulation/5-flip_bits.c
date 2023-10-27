#include "main.h"

/**
 * flip_bits - function that return the number of bit when flip a coin
 * @n:unsigned int number
 * @m:unsigned int flip number
 * Return:1
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor_result;
	unsigned int index = 0;

	xor_result = n ^ m;

	while (xor_result > 0)
	{
		index += xor_result & 1;
		xor_result >>= 1;
	}
	return (index);
}
