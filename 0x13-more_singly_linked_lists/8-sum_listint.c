#include "lists.h"
#include <stdlib.h>
/**
 * sum_listint - This function sums all nodes.
 * @head: header of list.
 * Return: sum.
*/
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head == NULL)
		return (0);
	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
