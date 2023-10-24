#include "lists.h"
/**
 * print_listint-fuction tha prints all the element of a list
 * @h:pointer to the list
 * Return:list
 */

size_t print_listint(const listint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}
	return (node_count);
}
