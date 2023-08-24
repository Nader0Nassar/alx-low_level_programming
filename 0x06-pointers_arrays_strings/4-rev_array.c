#include "main.h"

/**
 * reverse_array - This function reverses the content of an array of integers.
 * @a: array of integers.
 * @n: reversed number of elements of the array.
 *
 * Return: Always 0
 */

void reverse_array(int *a, int n)
{
	int index1, index2 = 0, temp_storage;

	for (index1 = n - 1; index1 >= n / 2; index1--)
	{
		temp_storage = a[index2];
		a[index2] = a[index1];
		a[index1] = temp_storage;
		index2++;
	}
}
