#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_list - This function frees list.
 * @head: head.
 * Return: Nothing.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
