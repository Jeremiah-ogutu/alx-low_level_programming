#include "lists.h"

/**
 * free_listint- fuction that frees a list
 * @head:pointer to the list
 */

void free_listint(listint_t *head)
{
	listint_t *present;

	while (head != NULL)
	{
		present = head;

		head = head->next;
		free(present);
	}
}
