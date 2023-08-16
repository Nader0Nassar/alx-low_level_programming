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

long long int fibonacci(long long int);

int main(void)
{
	long long int n = 1;

	while (n <= 50)
	{
		if (n == 50)
			printf("%lld", fibonacci(n));
		else
			printf("%lld, ", fibonacci(n));
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
long long int fibonacci(long long int num)
{
	if (num == 1)
		return (1);
	else if (num == 2)
		return (2);
	else if (num > 2)
		return (fibonacci(num - 1) + fibonacci(num - 2));
	return (0);
}
