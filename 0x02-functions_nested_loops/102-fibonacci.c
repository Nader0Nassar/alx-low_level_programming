#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  print the first 50 Fibonacci numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long num_1, num_2, Add;
	int i = 0;

	while (i <= 49)
	{
		Add = num_1 + num_2;
		printf("%lu", Add);
		num_1 = num_2;
		num_2 = Add;
		if (i != 49)
			printf(",");
		else
			printf("\n");
	i++;
	}
	return (0);
}
