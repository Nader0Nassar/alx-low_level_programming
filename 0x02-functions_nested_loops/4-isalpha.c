#include "main.h"

/**
 * _isalpha -  check the input is char or not
 *
 * @c: the input may be char or not
 *
 * Return: On success 1.
 */

int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}
