#include "lists.h"
#include <stdio.h>

size_t print_listint(const listint_t *h)
{
    size_t counter = 0;

    if (h != NULL)
    {
        while (h != NULL)
        {
            counter++;
            printf("%d\n", h->n);
            h = h->next;
        }
    }
    return (counter);
}
