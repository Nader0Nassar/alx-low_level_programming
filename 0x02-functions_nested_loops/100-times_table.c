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
		putchar('0');
		putchar(',');
		for (num2 = 1; num2 <= n; num2++)
		{
			num3 = num1 * num2;
			putchar(' ');
			if (num3 <= 9)
			{
				putchar(' ');
				putchar(' ');
				putchar(num3 + '0');
				if (num2 < n)
					putchar(',');
			}
			else if (num3 <= 99)
			(
				putchar(' ');
				putchar(num3 / 10 + '0');
				putchar(num3 % 10 + '0');
				if (num2 < n)
					putchar(',');
			}
			else
			{
				putchar(num3 / 100 + '0');
				putchar((num3 / 10) % 10 + '0');
				putchar(num3 % 10 + '0');
				if (num2 < n)
					putchar(',');
			}
		}
		putchar('\n');
	}
	}
}
