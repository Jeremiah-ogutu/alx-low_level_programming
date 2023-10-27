#include "main.h"

/**
 * get_endianness - fuction that checks the endianness
 *
 * Return: bites
 */

int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *bytes;

	bytes = (unsigned char *)&num;

	return ((*bytes == 1) ? 1 : 0);
}

