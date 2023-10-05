#include "main.h"
/**
 * malloc_checked-fuction that allocate memory using maloc
 * @b:it alocate memory size
 * Return:pointer
 */
void *malloc_checked(unsigned int b)
{
	char *pointer;

	pointer = malloc(b);
	if (pointer == NULL)
		exit(98);
	else
		return (pointer);
}
