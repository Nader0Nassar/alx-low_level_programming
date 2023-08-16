#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  Sum of even values in Fibonacci squence will be printed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	float Even_sum = 0;
	unsigned long num_1, num_2, Add;

	num_1 = 0;
	num_2 = 1;
	while (Even_sum <= 4000000)
	{
		Add = num_1 + num_2;
		if (Add % 2 == 0)
			Even_sum += Add;
		num_1 = num_2;
		num_2 = Add;
	}

	printf("%.0f\n", Even_sum);
	return (0);
}
