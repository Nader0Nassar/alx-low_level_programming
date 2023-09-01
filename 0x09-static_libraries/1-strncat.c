#include "main.h"

/**
 * _strlen - returns length of string
 * @s: string array
 *
 * Return: Always 0
 */

int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * _strncat - This function concatenates string
 *            to first n char of another string
 * @dest: first string
 * @src: second string
 * @n: Number of chars concatenated
 *
 * Return: Always 0
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;
	int destlen = _strlen(dest);

	while (i < _strlen(src) && j < n)
	{
		dest[destlen + i] = src[j];
		i++;
		j++;
	}
	return (dest);
}
