#include "lists.h"
#include <stdlib.h>
size_t listint_len(const listint_t *h);
/**
 * get_nodeint_at_index - This function get the selected node.
 * @head: header of list.
 * @index: deleted index.
 * Return: selected node.
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int length = listint_len(head), counter = 0;
	listint_t *temp = head;

	if (index > length)
		return (NULL);
	while (counter < index)
	{
		temp = temp->next;
		counter++;
	}
	return (temp);
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
