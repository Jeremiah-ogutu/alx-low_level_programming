#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_listint_safe-a fuction that free a ists
 * @head:adress pointer to the list
 *
 * Return:size of list that was free
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		count++;
	}
	return (count);
}
