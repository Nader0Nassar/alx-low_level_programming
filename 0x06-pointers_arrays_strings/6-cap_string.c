#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @lower_string: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *lower_string)
{
	int index1, index2;
	char Separators[] = {' ', '\t', '\n', ',', ';', '.', '!',
						'?', '"', '(', ')', '{', '}', '\0'};

	for (index1 = 0; lower_string[index1] != '\0'; index1++)
	{
		for (index2 = 0; Separators[index2] != '\0'; index2++)
		{
			if (lower_string[index1] == Separators[index2] || index1 == 0)
			{
				if (lower_string[index1 + 1] >= 97 && lower_string[index1 + 1] <= 122)
					lower_string[index1 + 1] -= 32;
			}
		}
	}
	return (lower_string);
}
