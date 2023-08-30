#include "main.h"

/**
 * _strlen_recursion - This function computes the length of a string.
 *
 * @s: a string
 *
 * Return: length of the string s
 */

int _strlen_recursion(char *s)
{
	int length = 0;

	/*Recusive Rule*/
	if (*s != '\0')
	{
		length++;

		length = length + _strlen_recursion(s + 1);
	}
	/*Base Rule*/
	return (length);
}
