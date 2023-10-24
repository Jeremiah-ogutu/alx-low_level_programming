#include "lists.h"

/**
 * delete_nodeint_at_index - fuction that deletes the node at a given index
 * @head:address pointer
 * @index:the index to be deleted from
 *
 * Return: 1 success else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *present;
	listint_t *temp;
	unsigned int indCount;

	present = *head;
	indCount = 0;

	if  (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (present != NULL && indCount < index - 1)
	{
		present = present->next;
		indCount++;
	}

	if (present == NULL || present->next == NULL)
	{
		return (-1);
	}

	temp = present->next;
	present->next = temp->next;
	free(temp);
	return (1);
}


