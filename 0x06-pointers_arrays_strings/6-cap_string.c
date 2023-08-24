#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @lower_string: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *lower_string)
{
	int index1, index2, Ascii_of_char;
	char Separators[] = {' ', '\n', '\t', ',', ';', '.', '!', '?', '"', '(', ')', '{', '}', '\0'};

	for (index1 = 0; lower_string[index1] != '\0'; index1++)
	{
		for (index2 = 0; Separators[index2] != '\0'; index2++)
		{
			if (lower_string[index1] == Separators[index2])
			{
				Ascii_of_char = lower_string[index1 + 1];
				if (Ascii_of_char >= 97 && Ascii_of_char <= 122)
				{
					lower_string[index1 + 1] -= 32;
				}
			}
		}
	}
	return (lower_string);
}
