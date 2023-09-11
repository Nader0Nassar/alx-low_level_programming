#include "dog.h"
#include <stdlib.h>

char *copy_string(char *, char *);
/**
 * new_dog - This function used to create a new dog.
 * @name: pointer to the name of the dog
 * @age: age of the dog
 * @owner: pointer to the owner of the dog
 * Return: struct dog.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int length_of_name, length_of_owner;
	dog_t *new_dog_info;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog_info = malloc(sizeof(dog_t));
	if (new_dog_info == NULL)
	{
		free(new_dog_info);
		return (NULL);
	}
	for (length_of_name = 0; name[length_of_name] != '\0'; length_of_name++)
	;
	for (length_of_owner = 0; owner[length_of_owner] != '\0'; length_of_owner++)
	;
	new_dog_info->name = malloc(length_of_name + 1);
	new_dog_info->owner = malloc(length_of_owner + 1);
	if (new_dog_info->name == NULL || new_dog_info->owner == NULL)
	{
		free(new_dog_info->name);
		free(new_dog_info->owner);
		free(new_dog_info);
		return (NULL);
	}

	copy_string(new_dog_info->name, name);
	new_dog_info->age = age;
	copy_string(new_dog_info->owner, owner);

	return (new_dog_info);
}
/**
 * copy_string - copies the string from src to dest
 *
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: copied string
 */

char *copy_string(char *dest, char *src)
{
	int i = 0, index, length = 0;

	while (src[i] != '\0')
	{
		length++;
		i++;
	}
	for (index = 0; index <= length; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
