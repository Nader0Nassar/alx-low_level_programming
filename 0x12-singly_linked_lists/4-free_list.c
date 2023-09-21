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
	free(head->str);
	free(head->len);
	free(head->next);
	free(head);
}
