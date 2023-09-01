#include "main.h"

/**
 * _memset - fills the first n bytes of s with constant byte b
 *
 * @s: block of memory will be filled with n bytes of s
 * @b: The value to be set in the first n bytes of s
 * @n: Number of bytes to be set the value
 *
 * Return: Pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		s[index] = b;
	}
	return (s);
}
