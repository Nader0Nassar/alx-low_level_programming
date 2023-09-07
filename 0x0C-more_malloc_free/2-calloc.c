#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - This function uses malloc to allocate memory for an array
 * @nmemb: # of elements of the array
 * @size: size of each element
 * Return: Pointer or Null
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *Daynamic_Array;
	unsigned int index = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);
	Daynamic_Array = malloc(nmemb * size);
	if (Daynamic_Array == NULL)
		return (NULL);
	while (index < size)
	{
		*(Daynamic_Array + index) = 0;
		index++;
	}
	return (Daynamic_Array);
}
