#include "lists.h"
#include <stdio.h>
/**
 * print_list - This function prints all elements
 *              of the list.
 * @h: head.
 * Return: Number of elements.
 */
size_t print_list(const list_t *h)
{
	const list_t *ptr = malloc(sizeof(list_t));
	int count = 0;

	if (h->str == NULL)
		printf("[0] (nil)\n");
	else
	{
		ptr = h;
		while (ptr->next != NULL)
		{
			count++;
			printf("[%d] %s\n", ptr->len, ptr->str);
			ptr = ptr->next;
		}
	}
	return (count);
}
