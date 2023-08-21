#include "main.h"

/**
 * rev_string -  reverses a string
 *
 * @s: string to reverse
 *
 * Return: Always 0
 */

void rev_string(char *s)
{
	char *rev_str = s;
	char *first = s;
	char *end = rev_str;
	int i;

	while (*first != '\0')
	{
		first++;
	}
	first--;
	while (first >= s)
	{
		*end = *first;
		first--;
		end++;
	}
	*end = '\0';
	for (i = 0; i < 10; i++)
	{
		s[i] = rev_str[i];
	}
}
