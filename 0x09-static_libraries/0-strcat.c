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
 * _strcat - This function concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = _strlen(src);
	int destlen = _strlen(dest), srclen = _strlen(src);

	while (i < _strlen(src) && j >= 1)
	{
		dest[destlen + i] = src[srclen - j];
		i++;
		j--;
	}
	return (dest);
}
