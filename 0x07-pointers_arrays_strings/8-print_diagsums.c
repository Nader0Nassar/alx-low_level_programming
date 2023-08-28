#include "main.h"
#include <stdio.h>

/**
 * print_diagsums -  This function prints sum of diagonals of square matrix
 *
 * @a: Matrix of integers
 * @size: size of matrix
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int index, left_Diag_Sum = 0, right_Diag_Sum = 0;

	for (index = 0; index < size; index++)
	{
		left_Diag_Sum += a[index + index * size];
		right_Diag_Sum += a[size - 1 - index + index * size];
	}
	printf("%d, %d\n", left_Diag_Sum, right_Diag_Sum);
}
