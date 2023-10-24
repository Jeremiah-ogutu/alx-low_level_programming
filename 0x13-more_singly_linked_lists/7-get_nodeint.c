#include "lists.h"

/**
 * *get_nodeint_at_index-fuction that returs the nth node in alist
 * @head:the pointer
 * @index:the nth holder
 * Return:NULL if fails
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int indxTrack;

	while (head != NULL)
	{
		if (indxTrack == index)
		{
			return (head);
		}
		head = head->next;
		indxTrack++;
	}
	return (NULL);
}

