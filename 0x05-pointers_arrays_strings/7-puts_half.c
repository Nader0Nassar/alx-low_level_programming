#include "main.h"

/**
 * puts_half -  prints second half of a string
 *
 * @str: The string to be printed
 *
 * Return: Always 0
 */

void puts_half(char *str)
{
	int i = 0, index = 0, length = 0;

	while (str[i] != '\0')
	{
		length++;
		i++;
	}
	if (length % 2 == 0)
	{
		for (index = length / 2; index < length; index++)
		{
			_putchar(str[index]);
		}
		_putchar('\n');
	}
	else
	{
		for (index = (length / 2) + 1; index < length; index++)
		{
			_putchar(str[index]);
		}
		_putchar('\n');
	}
}
