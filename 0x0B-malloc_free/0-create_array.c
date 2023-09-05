#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Function to creat array
 * @size: size of the array
 * @c: character
 * Return: Pointer or Null
 */
char *create_array(unsigned int size, char c)
{
	char *Daynamic_Array = malloc(size * sizeof(char));
	unsigned int index = 0;

	if (Daynamic_Array == NULL || size == 0)
		return (NULL);
	while (index < size)
	{
		*(Daynamic_Array + index) = c;
		index++;
	}
	return (Daynamic_Array);
}
