#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * malloc_checked - This function checks malloc
 * @b: number of Bytes will be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	char *tmp = malloc(b);

	if (tmp == NULL)
		exit(98);
	else
		exit(tmp);
}
