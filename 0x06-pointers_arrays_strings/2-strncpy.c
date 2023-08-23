#include "main.h"

/**
 * _strncpy - This function copies a string
 * @dest: copy string to it
 * @src: copied string
 * @n: Number of chars copied
 *
 * Return: Always 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
