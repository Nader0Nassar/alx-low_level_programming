#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - This function used to searche for an integer.
 * @array: an array.
 * @size: array size.
 * @cmp: pointer function.
 * Return: void.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int index;

	if (cmp == NULL || array == NULL)
	{
		return (-1);
	}

	if (size <= 0)
		return (-1);

	for (index = 0; index < size; index++)
	{
		if ((*cmp)(array[index]))
			return (index);
	}
	return (-1);
}
