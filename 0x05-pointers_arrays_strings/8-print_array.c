#include <stdio.h>
#include "main.h"

/**
 * print_array -  This function prints the first n items of an integer array.
 *
 * @a: integer array
 * @n: The number of printed elements
 *
 * Return: Always 0
 */

void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		if (index != n - 1)
		{
			printf("%d, ", a[index]);
		}
		else if (index == n - 1)
		{
			printf("%d\n", a[index]);
		}
		else
		{
			printf("\n");
		}
	}
}
