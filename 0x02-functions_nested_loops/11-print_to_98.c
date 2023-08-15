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
	for (n; n <= 98; n++)
	{
		printf("%d, ", n);
	}
}
