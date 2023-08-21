#include "main.h"

/**
 * print_rev -  prints a reversed string
 *
 * @s: string to reverse and print
 *
 * Return: Always 0
 */

void print_rev(char *s)
{
	char *revs = s;
	int i = 0, index;

	while (*revs != '\0')
	{
		i++;
		revs++;
	}
	for (index = i - 1; index >= 0; index--)
	{
		_putchar(s[index]);
	}
	_putchar('\n');
}
