#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 *
 * @dest: Block of memory that src will copied in it
 * @src: Block of memory will be copied in dest
 * @n: Number of copied bytes
 *
 * Return: Pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;

	for (index = 0; index < n; index++)
	{
		dest[index] = src[index];
	}
	return (dest);
}
