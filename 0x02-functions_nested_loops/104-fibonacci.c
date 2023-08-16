#include <stdio.h>

/**
 * digit_Count - to get the count of digits in number
 *
 * @a:  the input number
 *
 * Return: Digits count
 */
int digit_Count(int a)
{
	int c_digits = 0;

	if (!a)
		return (1);
	while (a)
	{
		a /= 10;
		c_digits++;
	}
	return (c_digits);
}

/**
 * main - Entry point
 *
 * Description:  The first 98 in Fibonacci squence will be printed
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	unsigned long int num1_p1 = 1, num2_p1 = 2, num1_p2 = 0, num2_p2 = 0;
	unsigned long int Add, Add0 = 0, Max_value = 100000000;
	int init, i;

	for (i = 1; i <= 98; i++)
	{
		if (num1_p2 > 0)
			printf("%lu", num1_p2);
	
		init = digit_Count(Max_value) - 1 - digit_Count(num1_p1);
		while (num1_p2 > 0 && init > 0)
		{
			printf("%d", 0);
			init--;
		}
		printf("%lu", num1_p1);
		Add = (num1_p1 + num2_p2) % Max_value;
		Add0 = num1_p2 + num2_p2 + (num1_p1 + num2_p1) / Max_value;
		num1_p1 = num2_p1;
		num1_p2 = num2_p2;
		num2_p1 = Add;
		num2_p2 = Add0;
		if (i != 98)
			printf(", ");
		else
			printf("\n");
	}


	return (0);
}
