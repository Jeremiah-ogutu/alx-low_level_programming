#include "main.h"

/**
 * swap_int - function to swip two numbers
 * @a:pointer,value 1 to be swiped
 * @b:pointer,value 2 to be swiped
 *
 * Return void
 */
void swap_int(int *a, int *b)
{

	int c;

	c = *a;
	*a = *b;
	*b = c;
}
