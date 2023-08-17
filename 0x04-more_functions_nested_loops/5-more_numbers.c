#include "main.h"

/**
 * more_numbers - prints No. form 0 to 14 ten times
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j > 9)
			{
				_putchar('1');
			}
			_putchar('0' + j % 10);
		}
	   _putchar('\n');
	}
}
