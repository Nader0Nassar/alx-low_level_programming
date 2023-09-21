#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * add_node - This function adds a new node at the beginning.
 * @head: head.
 * @str: string to duplicate.
 * Return: Number of elements.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_ptr = malloc(sizeof(list_t));

	if (new_ptr == NULL)
		return (NULL);
	new_ptr->str = strdup(str);
	new_ptr->len = strlen(str);
	new_ptr->next = *head;
	*head = new_ptr;
	return (new_ptr);
}
