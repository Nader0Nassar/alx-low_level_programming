#include "main.h"

/**
 * binary_to_uint - This function converts binary to number.
 * @b: string to binary.
 * Return: unsigned integer number.
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, power = 0, multipby2, j;
	int i, length = 0, k;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if ((*b < '0') || (*b > '1'))
			return (0);
		length++;
		b++;
	}
	for (k = 0; k < length; k++)
		b--;
	for (i = length - 1; i >= 0; i--)
	{
		if (i == length - 1)
			multipby2 = 1;
		else
		{
			multipby2 = 1;
			for (j = 0; j < power; j++)
				multipby2 *= 2;
		}
		sum += (b[i] - '0') * multipby2;
		power++;
	}
	return (sum);
}
