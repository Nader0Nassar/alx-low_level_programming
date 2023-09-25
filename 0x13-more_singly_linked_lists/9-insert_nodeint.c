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
	listint_t *new_node, *temp = *head;
	unsigned int counter = 0;

	new_node = malloc(sizeof(listint_t));
	if (!new_node || !head)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	while (temp && counter < idx)
	{
		if (counter == idx - 1)
		{
			new_node->next = temp->next;
			temp->next = new_node;
			return (new_node);
		}
		else
			temp = temp->next;
		counter++;
	}
	return (NULL);
}
