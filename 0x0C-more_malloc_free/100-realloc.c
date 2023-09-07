#include "main.h"
#include <stdlib.h>

/**
 * _realloc - This function uses malloc and free to reallocate a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: number of bytes, of the allocated space for ptr
 * @new_size: number of bytes of the new memory block
 * Return: Pointer or Null
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned index = 0;
	char *old_Pointer;
	char *new_Pointer;

	if (ptr == NULL)
	{
		new_Pointer = malloc(new_size);
		return (new_Pointer);
	}
	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	old_Pointer = ptr;
	new_Pointer = malloc(new_size);
	if (new_Pointer == NULL)
		return (NULL);
	while (index < old_size)
	{
		*(new_Pointer + index) = *(old_Pointer + index);
		index++;
	}
	free(ptr);
	return (new_Pointer);
}
