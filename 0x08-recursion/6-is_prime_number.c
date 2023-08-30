#include "main.h"

/**
 * divisor - This function computes remainder.
 *
 * @n: The number will be checked
 * @div: The divisor
 *
 * Return: 0 or 1
 */

int divisor(int n, int div)
{
	if (div <= 9)
	{
		if (n % div != 0)
		{
			return (divisor(n, div + 1));
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/**
 * is_prime_number - This function checks a number is prime or not.
 *
 * @n: The number will be checked
 *
 * Return: 0 or 1
 */

int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (divisor(n, 2));
}
