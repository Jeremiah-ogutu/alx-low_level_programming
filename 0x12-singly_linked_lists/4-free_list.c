#include "lists.h"

/**
 * free_list-function that frees the list
 * @head:pointer to the list to be freed
 * Return:NULL
 */
void free_list(list_t *head)
{
	list_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current->str);
		free(current);
	}
}
