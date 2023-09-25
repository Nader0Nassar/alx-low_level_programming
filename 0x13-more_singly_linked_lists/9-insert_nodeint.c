#include "lists.h"
#include <stdlib.h>
size_t listint_len(const listint_t *h);
/**
 * insert_nodeint_at_index - This function adds node at index.
 * @head: header of list.
 * @idx: index of addition.
 * @n: added number.
 * Return: New node.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp;
	unsigned int i = 0, length = listint_len(*head);

	if (idx > length)
	{
		return (NULL);
	}
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	temp = *head;
	while (i < idx - 1)
	{
		temp = temp->next;
		i++;
	}
	new_node->n = n;
	new_node->next = temp->next;
	temp->next = new_node;
	return (new_node);
}
/**
 * listint_len - This function compute the length.
 * @h: header of list.
 * Return: Number of nodes.
*/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			counter++;
			h = h->next;
		}
	}
	return (counter);
}
