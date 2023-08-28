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
	int i = 0, index1, index2;
	char matched_String[] = haystack;

	for (index1 = 0; haystack[index1] != '\0'; index1++)
	{
		for (index2 = 0; needle[index2] != '\0'; index2++)
		{
			if (needle[index2] == haystack[index1])
			{
				matched_String[i] = haystack[index1];
				i++;
			}
		}
	}
	return (matched_String);
}
