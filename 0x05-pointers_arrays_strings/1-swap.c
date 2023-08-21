#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 * @a: 1st Pointer
 * @b: 2nd Pointer
 * Return: Always 0
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
