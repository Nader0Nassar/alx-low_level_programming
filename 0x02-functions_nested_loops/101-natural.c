#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print the sum of all the multiples of 3 or 5 below 1024
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int num, sum = 0;

	for (num = 1; num < 1024; num++)
	{
		if ((num % 3) == 0 || (num % 5) == 0)
		{
			sum += num;
		}
	}
	return (0);
}
