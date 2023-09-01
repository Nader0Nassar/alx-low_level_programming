#include "main.h"

/**
 * _strchr - locates character c in string s
 *
 * @s: scanned string
 * @c: searched character
 *
 * Return: Pointer
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (&s[index]);
	}
	return (0);
}
