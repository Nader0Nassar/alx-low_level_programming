#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - This function frees the list.
 * @head: header of list.
 * Return: Nothing.
*/
void free_listint2(listint_t **head)
{
	listint_t *temp1, *temp2;

	if (*head == NULL)
		return;
	temp1 = *head;
	while (temp1 != NULL)
	{
		temp2 = temp1;
		temp1 = temp1->next;
		free(temp2);
	}
	*head = NULL;
}
