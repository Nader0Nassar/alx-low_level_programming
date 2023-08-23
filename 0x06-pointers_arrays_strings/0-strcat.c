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
 * _strcat: This function concatenates two strings
 * @dest: first string
 * @src: second string
 *
 * Return: Always 0
 */

char *_strcat(char *dest, char *src)
{
	static char destsrc[100];
	int i;

	for (i = 0; i <= (_strlen(dest) + _strlen(src)) - 1; i++)
	{
		if (i >= 0 && i <= _strlen(dest) - 1)
		{
			destsrc[i] = dest[i];
		}
		else
		{
			destsrc[i] = src[i - _strlen(dest)];
		}
	}
	return (destsrc);
}
