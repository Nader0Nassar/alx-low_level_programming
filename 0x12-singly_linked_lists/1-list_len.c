#include "lists.h"
#include <stdio.h>
/**
 * list_len - This function computes the number of elements
 * @h: head.
 * Return: length.
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
