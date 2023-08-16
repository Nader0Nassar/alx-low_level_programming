#include <stdio.h>

/**
 * main - Entry point
 *
 * Description:  print the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * @int: data typ of input of Fibonacci function
 *
 * Return: Always 0 (Success)
 */

int fibonacci(int);

int main(void)
{
	int n = 1;

	while (n <= 50)
	{
		if (n == 50)
			printf("%d", fibonacci(n));
		else
			printf("%d, ", fibonacci(n));
		n++;
	}
	printf("\n");
	return (0);
}

/**
 * fibonacci - fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
 *
 * Description:  Fibonacci Numbers
 *
 * @num: input of Fibonacci
 *
 * Return: Always value of Fib0 (Success)
 */
int fibonacci(int num)
{
	if (num == 1)
		return (1);
	else if (num == 2)
		return (2);
	else if (num > 2)
		return (fibonacci(num - 1) + fibonacci(num - 2));
	return (0);
}
