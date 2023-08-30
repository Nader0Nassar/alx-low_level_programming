#include "main.h"

/**
 * _puts_recursion - prints a string recursively
 *
 * @s: printed string
 *
 * Return: void
 */

void _puts_recursion(char *s)
{
	/*Base Rule*/
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	/*Recusive Rule*/
	s++;
	_puts_recursion(s);
}
