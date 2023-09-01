#include "main.h"

/**
 * _strcmp - This function compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int index;

	for (index = 0; s1[index] != '\0' && s2[index] != '\0'; index++)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
	}
	return (0);
}
