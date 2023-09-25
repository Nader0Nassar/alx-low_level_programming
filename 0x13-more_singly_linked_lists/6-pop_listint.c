#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - This function delets the head node.
 * @head: header of list.
 * Return: n of head.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp = *head;
	int n = temp->n;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	free(temp);
	return (n);
}
