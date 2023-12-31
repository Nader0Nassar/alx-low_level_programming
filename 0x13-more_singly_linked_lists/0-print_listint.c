#include "lists.h"
#include <stdio.h>

/**
 * print_listint - This function prints list of integers.
 * @h: header of list.
 * Return: Number of nodes.
*/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (h != NULL)
	{
		while (h != NULL)
		{
			counter++;
			printf("%d\n", h->n);
			h = h->next;
		}
	}
	return (counter);
}
