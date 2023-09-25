#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - This function frees the list.
 * @head: header of list.
 * Return: Nothing.
*/
void free_listint(listint_t *head)
{
	listint_t *temp = head;

	while (temp != NULL)
	{
		temp = temp->next;
		free(head);
		head = temp;
	}
}
