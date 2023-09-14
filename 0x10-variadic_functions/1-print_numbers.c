#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - This function used to print numbers
 *                  followed by a new line.
 * @separator: string used to separate numbers
 * @n: Number of numbers
 * Return: Nothing
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list Nums;
	unsigned int index;

	va_start(Nums, n);
	for (index = 1; index < n; index++)
	{
		printf("%d", va_arg(Nums, int));
		if (separator != NULL)
			printf("%s", separator);
	}
	printf("%d\n", va_arg(Nums, int));
	va_end(Nums);
}
