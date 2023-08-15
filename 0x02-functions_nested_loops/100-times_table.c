#include "main.h"
/**
 * print_times_table - prints times table, starting with 0
 * @n: is the printed n times table
 * Return: On success 1.
 */
void print_times_table(int n)
{
	if (n <= 15 || n >= 0)
	{
	int num1, num2, num3;

	for (num1 = 0; num1 <= n; num1++)
	{
		_putchar('0');
		_putchar(',');
		for (num2 = 1; num2 <= n; num2++)
		{
			num3 = num1 * num2;
			_putchar(' ');
			if (num3 <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
				if (num2 < n)
					_putchar(',');
			}
			else if (num3 <= 99)
			{
				_putchar(' ');
				_putchar(num3 / 10 + '0');
				_putchar(num3 % 10 + '0');
				if (num2 < n)
					_putchar(',');
			}
			else if (num3 >= 100)
			{
				_putchar(num3 / 100 + '0');
				_putchar((num3 / 10) % 10 + '0');
				_putchar(num3 % 10 + '0');
				if (num2 < n)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
	}
}
