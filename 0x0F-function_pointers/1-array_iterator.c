#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator -fuction giving parameter
 * @size:the size of array
 * @array:the array to be given parmeter
 * @action:the called action
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL)
	{
		return;
	}
	if (action == NULL)
	{
		return;
	}
	for (i = 0; i < size; i++)
		action(array[i]);
}
