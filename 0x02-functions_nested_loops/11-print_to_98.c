#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - Print numbers from the inputt number to 98
 *
 * @n: start printing numbers from n
 *
 * Return: On success 1.
 */

void print_to_98(int n)
{
	while (n <= 98)
	{
		if (n == 98)
			printf("%d", n);
		else
			printf("%d, ", n);
		n++;
	}
}
