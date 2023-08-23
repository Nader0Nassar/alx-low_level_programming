#include "main.h"

/**
 * _strcmp - This function compares two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: Always 0
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0, Ascii_s1 = 0, Ascii_s2 = 0;

	while (s1[i] != '\0')
	{
		Ascii_s1 += (int) s1[i];
		Ascii_s2 += (int) s2[i];
		i++;
	}
	if (Ascii_s1 == Ascii_s2)
		return (0);
	else if (Ascii_s1 > Ascii_s2)
		return (15);
	else if (Ascii_s1 < Ascii_s2)
		return (-15);
	return (0);
}
