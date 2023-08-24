#include "main.h"

/**
 * cap_string - This function capitalizes all words of a string.
 * @ls: lower string.
 *
 * Return: Always 0
 */

char *cap_string(char *ls)
{
	int i;

	for (i = 0; ls[i] != '\0'; i++)
	{
		if (i = 0 || ls[i] == ' ' || ls[i] == '\t' || ls[i] == '\n' ||
			ls[i] == ',' || ls[i] == ';' || ls[i] == '.' || ls[i] == '!' ||
			ls[i] == '?' || ls[i] == '"' || ls[i] == '(' || ls[i] == ')' ||
			ls[i] == '{' || ls[i] == '}')
		{
			if (ls[i + 1] >= 97 && ls[i + 1] <= 122)
				ls[i + 1] -= 32;
		}
	}
	return (ls);
}
