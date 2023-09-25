#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - This function delets the selected node.
 * @head: header of list.
 * @index: deleted index.
 * Return: 1 or -1.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *deleted_node;
	unsigned int counter = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (counter < index - 1)
	{
		temp = temp->next;
		counter++;
	}
	deleted_node = temp->next;
	temp->next = deleted_node->next;
	free(deleted_node);
	return (1);
}
