#include "main.h"

/**
 * puts2 -  prints first, third, fivth,.. char in a string
 *
 * @str: The string to be printed
 *
 * Return: Always 0
 */

void puts2(char *str)
{
	int i = 0, index = 0, length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	for (index = 0; index < length; index += 2)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
