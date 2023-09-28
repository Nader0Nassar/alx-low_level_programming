#include "main.h"

/**
 * print_binary - This function prints the binary of number.
 * @n: a number.
 */
void print_binary(unsigned long int n)
{
	unsigned long int itr;
	int counter, checker = 0;

	for (counter = 10; counter >= 0; counter--)
	{
		itr = n >> counter;
		if (itr & 1)
		{
			_putchar('1');
			checker++;
		}
		else if (checker)
			_putchar('0');
	}
	if (!checker)
		_putchar('0');
}
