#include "main.h"
/**
 * get_bit - This function computes a bit.
 * @n: any number.
 * @index: the index of the number.
 * Return: bit of the number.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int index_bit;

	if (index > 63)
		return (-1);
	index_bit = (n >> index) & 1;
	return (index_bit);
}
