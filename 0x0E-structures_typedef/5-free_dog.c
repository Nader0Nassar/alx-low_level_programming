#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - This function used to free dogs
 * @d: pointer to dog_t data type
 * Return: void
 */

void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
