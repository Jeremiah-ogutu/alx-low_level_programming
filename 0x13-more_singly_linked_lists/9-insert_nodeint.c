#include "lists.h"

/**
 *  *insert_nodeint_at_index-fuction that insert new_modeat agiven position
 *  @head:address pointer
 *  @idx:index to be insert
 *  @n:the new_node
 *
 *  Return:new_node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node;
	listint_t *present;
	unsigned int indexCount;

	indexCount = 0;
	present = *head;
	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	while (present != NULL && indexCount < idx - 1)
	{
		present = present->next;
		indexCount++;
	}

	if (present == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = present->next;
	present->next = new_node;

	return (new_node);
}
