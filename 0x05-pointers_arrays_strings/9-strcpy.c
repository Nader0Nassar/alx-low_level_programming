#include <stdio.h>
#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 *
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: Always 0
 */

char *_strcpy(char *dest, char *src)
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
