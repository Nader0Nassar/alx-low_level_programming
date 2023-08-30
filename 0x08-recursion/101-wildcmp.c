#include "main.h"

/**
 * wildcmp - This function checks if two strings are identical or not.
 *
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: 1 or 0
 */

int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0')
	{
		if (*s2 != '\0')
		{
			if (*s2 == '*')
				return (wildcmp(s1, s2 + 1));
		}
		if (*s2 == '\0')
			return (1);
	}
	if (*s2 == '*')
		return (wildcmp(s1 + 1, s2) || wildcmp(s1, s2 + 1));
	else if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));
	return (0);
}
