#include "lists.h"
/**
 * free_listint_safe - This function frees list.
 * @h: head.
 * Return: length of list.
 */
size_t free_listint_safe(listint_t **h)
{
	int sub;
	listint_t *ptr;
	size_t list_length = 0;

	if (h == NULL || *h == NULL)
		return (0);
	while (*h != NULL)
	{
		sub = *h - (*h)->next;
		if (sub > 0)
		{
			ptr = (*h)->next;
			free(*h);
			*h = ptr;
			list_length++;
		}
		else
		{
			free(*h);
			*h = NULL;
			list_length++;
			break;
		}
	}
	*h = NULL;
	return (list_length);
}
