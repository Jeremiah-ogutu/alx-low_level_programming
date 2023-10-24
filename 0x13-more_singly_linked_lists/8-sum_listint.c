#include "lists.h"

/**
 * sum_listint-fucton that returns thesum of n values in alist
 * @head:list pointer
 *
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
