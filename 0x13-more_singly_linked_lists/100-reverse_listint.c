#include "lists.h"

/**
 * reverse_listint - This function reverses the list.
 * @head: header of list.
 * Return: first node of reversed list.
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous_node = NULL, *next_node = *head;

	while (next_node != NULL)
	{
		next_node = next_node->next;
		(*head)->next = previous_node;
		previous_node = *head;
		*head = next_node;
	}
	*head = previous_node;
	return (*head);
}
