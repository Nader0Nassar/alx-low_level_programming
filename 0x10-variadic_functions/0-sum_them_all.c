#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - This function used to sum
 *                variable number of numbers
 * @n: Number of numbers
 * Return: Summation
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list Nums;
	unsigned int index;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(Nums, n);
	for (index = 1; index <= n; index++)
	{
		sum += va_arg(Nums, int);
	}
	va_end(Nums);
	return (sum);
}
