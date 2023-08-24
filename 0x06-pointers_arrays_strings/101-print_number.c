#include "main.h"

/**
 * print_number - This function prints an integer
 * @n: The printed number
 *
 * Return: Always 0
 */

void print_number(int n)
{
	unsigned int new_N = n;

	if (n < 0)
	{
		_putchar('-');
		new_N = n * -1;
	}
	if ((new_N / 10) > 0)
		print_number(new_N / 10);
	_putchar('0' + (new_N % 10));
}
