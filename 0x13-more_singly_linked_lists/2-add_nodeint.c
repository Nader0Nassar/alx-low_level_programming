#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - This function add node.
 * @head: header of list.
 * @n: Number added.
 * Return: New nod.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
