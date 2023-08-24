#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @lower_string: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *lower_string)
{
	int index;

	for (index = 0; lower_string[index] != '\0'; index++)
	{
		if (lower_string[index] == ' ' || lower_string[index] == '\t' ||
			lower_string[index] == '\n' || lower_string[index] == ',' ||
			lower_string[index] == ';' || lower_string[index] == '.' ||
			lower_string[index] == '!' || lower_string[index] == '?' ||
			lower_string[index] == '"' || lower_string[index] == '(' ||
			lower_string[index] == ')' || lower_string[index] == '{' ||
			lower_string[index] == '}')
		{
			if (lower_string[index + 1] >= 97 && lower_string[index + 1] <= 122)
				lower_string[index + 1] -= 32;
		}
	}
	return (lower_string);
}
