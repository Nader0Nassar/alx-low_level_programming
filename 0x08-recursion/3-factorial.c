#include "main.h"

/**
 * factorial - This function computes the factorial of integer.
 *
 * @n: an integer number
 *
 * Return: factorial
 */

int factorial(int n)
{
	/*Base Rule*/
	if (n == 1)
		return (1);
	else if (n < 0)
		return (-1);
	/*Recusive Rule*/
	return (n * factorial(n - 1));
}
