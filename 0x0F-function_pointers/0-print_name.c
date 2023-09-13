#include "function_pointers.h"

/**
 * print_name - This function used to print a name.
 * @name: pointer to a name.
 * @f: pointer function
 * Return: void.
 */

void print_name(char *name, void (*f)(char *))
{
	if (f == NULL || name == NULL)
	{
		return;
	}

	(*f)(name);
}
