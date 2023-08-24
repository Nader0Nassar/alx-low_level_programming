#include "main.h"
#include <stdio.h>

/**
 * print_buffer - This function print buffer
 * @b: pointer to buffer
 * @size: size bytes of printed content
 *
 * Return: Always 0
 */

void print_buffer(char *b, int size)
{
	int index, n, m, dot;

	for (index = 0; index < size; index += 10)
	{
		if (size - index < 10)
			m = size - index;
		else
			m = 10;
		printf("%08x: ", index);

		for (n = 0; n < 10; n++)
		{
			if (n < m)
				printf("%02x", *(b + index + n));
			else
				printf("  ");
			if (n % 2)
			{
				printf(" ");
			}
		}

		for (n = 0; n < m; n++)
		{
			dot = *(b + index + n);
			if (dot < 32 || dot > 132)
			{
				dot = '.';
			}
			printf("%c", dot);
		}

		printf("\n");
	}

	if (size <= 0)
	{
		printf("\n");
		return;
	}
}
