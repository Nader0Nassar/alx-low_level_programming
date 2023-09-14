#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>

/**
 * print_all - This function used to print anything
 *                  followed by a new line.
 * @format: c, i, f and s
 * Return: Nothing
*/

void print_all(const char * const format, ...)
{
	va_list printed_List;
	char *separator = "";
	char *string;
	int index = 0;

	if (format == NULL)
		return;
	va_start(printed_List, format);
	while (format[index] != '\0')
	{
		switch (format[index])
		{
		case 'c':
			printf("%s%c", separator, va_arg(printed_List, int));
			break;
		case 'i':
			printf("%s%d", separator, va_arg(printed_List, int));
			break;
		case 'f':
			printf("%s%f", separator, va_arg(printed_List, double));
			break;
		case 's':
			string = va_arg(printed_List, char *);
			if (string == NULL)
				string = "(nil)";
			printf("%s%s", separator, string);
			break;
		default:
			index++;
			break;
		}
		index++;
		separator = ", ";
	}
	printf("\n");
	va_end(printed_List);
}
