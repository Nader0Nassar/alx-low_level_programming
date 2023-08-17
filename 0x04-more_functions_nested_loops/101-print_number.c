#include "main.h"

/**
 * print_number - prints a number
 *
 * @n:  The printed number
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
