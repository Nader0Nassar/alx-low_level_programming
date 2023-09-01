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

/**
 * _strstr -  This function finds substring needle in the string haystack
 *
 * @haystack: scanned string
 * @needle: substring
 *
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int index1, index2;
	int length_of_haystack = _strlen(haystack);
	int length_of_needle = _strlen(needle);
	int length = length_of_haystack - length_of_needle;
	char *matched_substring;

	if (length < 0)
		return ('\0');
	else if (length >= 0)
	{
		for (index1 = 0; index1 <= length; index1++)
		{
			for (index2 = 0; index2 < length_of_needle; index2++)
			{
				if (haystack[index1 + index2] != needle[index2])
					break;
			}
			if (index2 == length_of_needle)
			{
				matched_substring = haystack + index1;
				return (matched_substring);
			}
		}
	}
	return ('\0');
}
