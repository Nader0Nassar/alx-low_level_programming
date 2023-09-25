#include "lists.h"
#include <stdio.h>
/**
 * list_length_loop - computes the nodes numbers.
 * @head: head of list.
 * Return: nodes numbers.
 */
size_t list_length_loop(const listint_t *head)
{
	size_t counter = 1;
	const listint_t *ptr1, *ptr2;

	if (head == NULL || head->next == NULL)
		return (0);
	ptr1 = head->next;
	ptr2 = (head->next)->next;
	while (ptr2)
	{
		if (ptr1 == ptr2)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				counter++;
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			ptr1 = ptr1->next;
			while (ptr1 != ptr2)
			{
				counter++;
				ptr1 = ptr1->next;
			}
			return (counter);
		}
		ptr1 = ptr1->next;
		ptr2 = (ptr2->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - This function prints list.
 * @head: head.
 * Return: length of the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count, i = 0;

	count = list_length_loop(head);
	if (count == 0)
	{
		for (; head != NULL; count++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < count; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (count);
}
