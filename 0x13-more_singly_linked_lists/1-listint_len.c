#include "lists.h"

/**
 * listint_len-fuction that return the number of element
 * @h:pointer to element
 * Return:number of element
 */
size_t listint_len(const listint_t *h)
{
	size_t numElement;

	numElement = 0;

	while (h != NULL)
	{
		numElement++;

		h = h->next;
	}
	return (numElement);
}
