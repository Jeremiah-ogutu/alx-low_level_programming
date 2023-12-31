#include "lists.h"

/**
 * pop_listint-fuction that deletes the head node of a list
 * @head:pointer address
 *
 * Return:head data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	temp = *head;
	data = temp->n;

	*head = (*head)->next;
	free(temp);

	return (data);
}
