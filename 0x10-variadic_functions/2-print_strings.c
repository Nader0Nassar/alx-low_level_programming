#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - This function used to print strings
 *                  followed by a new line.
 * @separator: string used to separate numbers
 * @n: Number of numbers
 * Return: Nothing
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_list;
	unsigned int index;
	char *string;

	va_start(str_list, n);

	for (index = 0; index < n; index++)
	{
		string = va_arg(str_list, char *);
		if (string == NULL)
			printf("(nil)");
		else
			printf("%s", string);

		if (index != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");

	va_end(str_list);
}
