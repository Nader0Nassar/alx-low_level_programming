#include "main.h"

/**
 * _strpbrk - computes the length of a prefix substring
 *
 * @s: scanned string
 * @accept: matched characters with s
 *
 * Return: Pointer
 */

char *_strpbrk(char *s, char *accept)
{
	int index1, index2;
	char *matched_Char;

	for (index1 = 0; s[index1] != '\0'; index1++)
	{
		for (index2 = 0; accept[index2] != '\0'; index2++)
		{
			if (accept[index2] == s[index1])
			{
				matched_Char = &s[index1];
				return (matched_Char);
			}
		}
	}
	return (0);
}
