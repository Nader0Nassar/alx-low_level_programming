#include "main.h"
/**
 * flip_bits - This function computes bits number.
 * @n: 1st number.
 * @m: 2nd number.
 * Return: bits number.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c, x = n ^ m;
	int counter, nums = 0;

	for (counter = 63; counter >= 0; counter--)
	{
		c = x >> counter;
		if (c & 1)
			nums++;
	}
	return (nums);
}
