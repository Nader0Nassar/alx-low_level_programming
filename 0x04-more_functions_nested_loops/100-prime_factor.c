#include <stdio.h>

/**
 * main - prints largest prime factor of 612852475143
 *
 * Return: Always 0.
 */

int main(void)
{
	unsigned long int i, primary_Factor;

	for (i = 2; i <= 1000000000; i++)
	{
		if (612852475143 % i == 0)
		{
			primary_Factor = i;
		}
	}
	printf("%lu\n", primary_Factor);
	return (0);
}
