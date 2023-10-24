#include "lists.h"

/**
 * free_listint2-fuction that frees alist and set pointer to null
 * @head:adresspointer
 */
void free_listint2(listint_t **head)
{
	listint_t *present;
	listint_t *temp;

	present = *head;

	while (present != NULL)
	{
		temp = present;
		present = present->next;
		free(temp);
	}
	*head = NULL;
}
