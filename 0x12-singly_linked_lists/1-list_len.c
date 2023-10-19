#include "lists.h"

/**
 * list_len - fuction that return number of elements
 * @h:pointer to head of linked list
 * Return: nodes counted
 */
size_t list_len(const list_t *h)
{
	size_t nodeCount = 0;

	while (h != NULL)
	{
		nodeCount++;
		h = h->next;
	}
	return (nodeCount);
}
