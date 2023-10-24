#include "lists.h"

/**
 * *add_nodeint-fuctiont ha add node at the beginning of a list
 * @head:address to the list
 * @n:number to be added
 * Return:number
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addNum;

	addNum = malloc(sizeof(listint_t));

	if (addNum == NULL)
	{
		return (NULL);
	}

	addNum->n = n;
	addNum->next = *head;

	*head = addNum;
	return (addNum);
}
