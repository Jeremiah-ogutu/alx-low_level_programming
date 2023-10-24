#include "lists.h"
/**
 *  *reverse_listint - fuction to reverse a list
 *  @head:adress pointer
 *
 *  Return:reverse
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *rest;
	listint_t *reversed;

	rest = (*head)->next;
	reversed = reverse_listint(&rest);

	(*head)->next = rest;

	return (reversed);
}
