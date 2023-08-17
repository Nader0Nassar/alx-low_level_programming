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
	int digits, divider = 1;

	if (n < 0)
	{
		_putchar('-');
		n = -1 * n;
	}
	else if (n == 0)
	{
		_putchar('0');
	}
	digits = n;
	while (digits)
	{
		digits /= 10;
		divider *= 10;
	}
	while (divider != 1)
	{
		_putchar('0' + (n / (divider / 10)) % 10);
		divider /= 10;
	}
}
