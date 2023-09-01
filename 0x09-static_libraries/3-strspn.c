#include "main.h"

/**
 * _strspn - computes the length of a prefix substring
 *
 * @s: scanned string
 * @accept: matched characters with s
 *
 * Return: integer
 */

unsigned int _strspn(char *s, char *accept)
{
	int index1, index2;
	unsigned int matched_Length = 0;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (accept[index2] == s[index1])
			{
				matched_Length++;
				break;
			}
			else if (accept[index2 + 1] == '\0')
				return (matched_Length);
		}
	}
	return (matched_Length);
}
