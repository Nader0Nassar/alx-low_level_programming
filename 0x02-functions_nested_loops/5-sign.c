#include "main.h"

/**
 * print_sign -  check the sign of input
 *
 * @n: the input may be + , - or 0
 *
 * Return: On success 1.
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
}
