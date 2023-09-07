#include "main.h"
#include <stdlib.h>

/**
 * array_range - This function creates an array of integers
 *               from min (included) to max (included),
 *               ordered from min to max
 * @min: minimum value appeared in the array
 * @max: maximum value appeared in the array
 * Return: Pointer or Null
 */
int *array_range(int min, int max)
{
	int *Daynamic_Array;
	int index = 0;

	if (min > max)
		return (NULL);
	Daynamic_Array = malloc(sizeof(int) * (max - min + 1));
	if (Daynamic_Array == NULL)
		return (NULL);
	while (min <= max)
		*(Daynamic_Array + index++) = min++;
	return (Daynamic_Array);
}
