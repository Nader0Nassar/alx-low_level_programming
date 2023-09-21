#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node_end - This function adds a new node at the end.
 * @head: head.
 * @str: string to duplicate.
 * Return: Number of elements.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_ptr = malloc(sizeof(list_t)), *temp;

	temp = *head;
	if (new_ptr == NULL)
		return (NULL);
	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = NULL;

	if (*head == NULL)
	{
		*head = new_ptr;
		return (new_ptr);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = new_ptr;
	return (new_ptr);
}
