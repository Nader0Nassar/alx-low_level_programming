#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: string to compute the length of it
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
