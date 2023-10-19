#include "lists.h"

/**
 * *add_node_end - function that add anew node at the end of alist
 * @head:The address to the list
 * @str:pointer of the string
 * Return:address or NULL if error
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode;
	list_t *current = *head;

	if (str == NULL)
	{
		return (NULL);
	}
	newNode = malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	return (newNode);
}
