#include "main.h"

/**
 * _strstr -  This function finds substring needle in the string haystack
 *
 * @haystack: scanned string
 * @needle: matched characters with haystack
 *
 * Return: Pointer
 */

char *_strstr(char *haystack, char *needle)
{
	int index1, index2;
	char *matched_Char;

	for (index1 = 0; needle[index1] != '\0'; index1++)
	{
		for (index2 = 0; haystack[index2] != '\0'; index2++)
		{
			if (needle[index1] == haystack[index2])
			{
				matched_Char = &haystack[index2];
				break;
			}
		}
		return (matched_Char);
	}
	return (0);
}
