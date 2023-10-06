#include "main.h"
/**
 * _realloc-fuction that rellocatememory block usng  maloc and free
 * @ptr:pointer
 * @old_size:the size allocated for pointer
 * @new_size:the new size for block
 * Return:pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t min_size;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size == old_size)
	{
		return (ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	min_size = (old_size < new_size) ? old_size : new_size;

	memcpy(new_ptr, ptr, min_size);

	free(ptr);
	return (new_ptr);
}
