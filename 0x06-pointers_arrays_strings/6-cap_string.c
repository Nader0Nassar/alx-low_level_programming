#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @lower_string: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *lower_string)
{
	int i = 0;

	while (lower_string[i] != '\0')
	{
		if (lower_string[i] == ' ' || ls[i] == '\t' || ls[i] == '\n' ||
			lower_string[i] == ',' || ls[i] == ';' || ls[i] == '.' || ls[i] == '!' ||
			lower_string[i] == '?' || ls[i] == '"' || ls[i] == '(' || ls[i] == ')' ||
			ls[i] == '{' || ls[i] == '}')
		{
			if (ls[i + 1] >= 'a' && ls[i + 1] <= 'z')
				ls[i + 1] = ls[i + 1] - 32;
		}
		i++;
	}
	if (ls[0] >= 'a' && ls[0] <= 'z')
	{
		ls[0] -= 32;
	}
	return (ls);
}
