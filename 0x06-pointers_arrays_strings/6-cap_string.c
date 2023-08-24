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

	while (ls[i])
	{
		while (!(ls[i] >= 'a' && ls[i] <= 'z'))
			i++;
		if (ls[i - 1] == ' ' ||
		    ls[i - 1] == '\t' ||
		    ls[i - 1] == '\n' ||
		    ls[i - 1] == ',' ||
		    ls[i - 1] == ';' ||
		    ls[i - 1] == '.' ||
		    ls[i - 1] == '!' ||
		    ls[i - 1] == '?' ||
		    ls[i - 1] == '"' ||
		    ls[i - 1] == '(' ||
		    ls[i - 1] == ')' ||
		    ls[i - 1] == '{' ||
		    ls[i - 1] == '}' ||
		    i == 0)
				ls[i - 1] -= 32;
		i++;
	}
	return (ls);
}
