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
	int i = 0, j = 0, index = 0, length = 0;
	char temp_Char;

	while (s[i] != '\0')
	{
		length++;
		i++;
	}
	for (index = length - 1; index >= length / 2; index--)
	{
		temp_Char = s[j];
		s[j] = s[index];
		s[index] = temp_Char;
		j++;
	}
}
