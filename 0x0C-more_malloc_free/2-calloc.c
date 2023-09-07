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
	void *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	return (array);
}
