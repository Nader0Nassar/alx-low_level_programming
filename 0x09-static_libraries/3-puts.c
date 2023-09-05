#include "main.h"

/**
 * _puts -  prints a string
 *
 * @str: The printed string
 *
 * Return: Always 0
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}