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
	int index1, index2;

	for (index1 = 0; src[index1] != '\0' && index1 < n; index1++)
		dest[index1] = src[index1];
	for (index2 = index1; index2 < n; index2++)
		dest[index2] = '\0';
	return (dest);
}
