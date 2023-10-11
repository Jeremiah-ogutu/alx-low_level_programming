#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - fuction searching for int
 * @array:array containting int
 * @size:number of ellement in int
 * @cmp:pointer
 * Return:0 else -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int foundInt;

	if (array == NULL)
	{
		return (-1);
	}
	if (cmp == NULL)
	{
		return (-1);
	}
	if (size <= 0)
	{
		return (-1);
	}
	for (foundInt = 0; foundInt < size; foundInt++)
	{
		if (cmp(array[foundInt]) == 1)
			return (foundInt);
	}
	return (-1);
}
