#include "main.h"

/**
 * print_binary - fuction that print the binary representantion of a number
 *
 * @n:the number to be printed in binary
 *
 * Return:1 success
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
	{
		print_binary(n >> 1);
	}
	putchar((n & 1) ? '1' : '0');
}
