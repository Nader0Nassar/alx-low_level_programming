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

/**
 * palindrome_Help - This function checks palindrome.
 *
 * @string: string
 * @index: index
 * @length: length
 *
 * Return: 0 or 1
 */

int palindrome_Help(char *string, int index, int length)
{
	if (*(string + index) != *(string + length - 1))
	{
		return (0);
	}
	if (index >= length)
	{
		return (1);
	}
	return (palindrome_Help(string, index + 1, length - 1));
}


/**
 * is_palindrome - This function checks palindrome.
 *
 * @s: string
 *
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
	{
		return (1);
	}
	return (palindrome_Help(s, 0, _strlen_recursion(s)));
}
