#include "main.h"

/**
 * _print_rev_recursion - prints a string recursively in reversed order
 *
 * @s: a string will be reversed and printed
 *
 * Return: void
 */

void _print_rev_recursion(char *s)
{
	/*Base and recursive Rules*/
	if (*s != '\0')
	{
		_print_rev_recursion(s+1);
		_putchar(*s);
	}
}
