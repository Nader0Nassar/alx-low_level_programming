#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @ls: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *ls)
{
	int i = 0;

	while (ls[i] != '\0')
	{
		if (ls[i] == ' ' || ls[i] == '\t' || ls[i] == '\n' ||
			ls[i] == ',' || ls[i] == ';' || ls[i] == '.' || ls[i] == '!' ||
			ls[i] == '?' || ls[i] == '"' || ls[i] == '(' || ls[i] == ')' ||
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
