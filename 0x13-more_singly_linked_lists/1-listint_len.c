#include "lists.h"

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
