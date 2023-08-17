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
	if (n <= 9)
	{
		_putchar('0' + n);
	}
	else if (n <= 99)
	{
		_putchar('0' + n / 10);
		_putchar('0' + n % 10);
	}
	else if (n <= 999)
	{
		_putchar('0' + n / 100);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n <= 9999)
	{
		_putchar('0' + n / 1000);
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
	else if (n <= 99999)
	{
		_putchar('0' + n / 10000);
		_putchar('0' + (n / 1000) % 10);
		_putchar('0' + (n / 100) % 10);
		_putchar('0' + (n / 10) % 10);
		_putchar('0' + n % 10);
	}
}
