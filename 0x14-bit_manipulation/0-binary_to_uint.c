#include "main.h"

/**
 * binary_to_uint-fuction that print binary to unsigned int
 * @b:pointer binary
 * Return:0 success
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (*b)
	{
		if (*b == '0' || *b == '1')
		{
			count = count << 1;
			count += (*b - '0');
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (count);
}
