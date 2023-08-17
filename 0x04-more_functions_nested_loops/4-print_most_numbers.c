#include "main.h"

/**
 * print_most_numbers - uses _putchar twice to print numbers from 0 to 9
 *                      except 2 and 4
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		if (i != 2 && i != 4)
		{
			_putchar('0' + i);
		}
	}
	_putchar('\n');
}
