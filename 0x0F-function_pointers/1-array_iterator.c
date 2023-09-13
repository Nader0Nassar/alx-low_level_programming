#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - This function used to execute a function given
 *                   as a parameter on each element of an array.
 * @array: an array.
 * @size: array size.
 * @action: pointer function.
 * Return: void.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;

	if (action == NULL || array == NULL)
	{
		return (0);
	}

	for (index = 0; index < size; index++)
	{
		(*action)(array[index]);
	}
}
