#include "main.h"

/**
 * times_table - prints the 9 times table, starting with 0
 *
 *
 * Return: On success 1.
 */

void times_table(void)
{
	int num1, num2, num3;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');
		_putchar(',');
		for (num2 = 1; num2 <= 9; num2++)
		{
			num3 = num1 * num2;
			if (num3 <= 9)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(num3 + '0');
				if (num2 < 9)
					_putchar(',');
			}
			else
			{
				_putchar(' ');
				_putchar(num3 / 10 + '0');
				_putchar(num3 % 10 + '0');
				if (num2 < 9)
					_putchar(',');
			}
		}
		_putchar('\n');
	}
}
