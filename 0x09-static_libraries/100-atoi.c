#include <stdio.h>
#include "main.h"

/**
 * _atoi - convert a string to an integer
 *
 * @s: string
 *
 * Return: Always 0
 */

int _atoi(char *s)
{
	int i = 0, index = 0, sign_before = 1;
	unsigned int value = 0;

	while (s[index] != '\0')
	{
		while (s[i] < 48 || s[i] > 57)
		{
			if (s[i] == 45)
				sign_before *= -1;
			i++;
		}
		if (s[index] >= 48 && s[index] <= 57)
		{
			value = value * 10 + s[index] - 48;
			if (s[index + 1] < 48 || s[index + 1] > 57)
				break;
		}
		index++;
	}
	return (sign_before * value);
}
