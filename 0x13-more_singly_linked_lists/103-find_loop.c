#include "lists.h"
/**
 * find_listint_loop - This function searchs for loops.
 * @head: head.
 * Return: pointer to start.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *ptr1, *ptr2;

	ptr1 = ptr2 = head;
	if (head == NULL)
		return (NULL);
	while (ptr1 && ptr2 && ptr2->next)
	{
		ptr2 = ptr2->next->next;
		ptr1 = ptr1->next;
		if (ptr2 == ptr1)
		{
			ptr1 = head;
			while (ptr1 != ptr2)
			{
				ptr1 = ptr1->next;
				ptr2 = ptr2->next;
			}
			return (ptr2);
		}
	}
	return (NULL);
}
