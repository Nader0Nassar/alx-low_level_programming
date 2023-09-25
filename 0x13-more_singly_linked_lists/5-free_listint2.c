#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees the list.
 * @head: header of list.
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp = *head;

	if (head == NULL)
		return;

	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);
		*head = temp;
	}
}
