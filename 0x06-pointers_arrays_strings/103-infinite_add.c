#include "main.h"

#include "main.h"

/**
 * _strlen -  returns the length of a string
 *
 * @s: string to compute the length of it
 *
 * Return: Always 0
 */
int _strlen(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

/**
 * infinite_add - This function adds two numbers
 * @n1: 1st number
 * @n2: 2nd number
 * @r: result
 * @size_r: size of result
 *
 * Return: Always 0
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int max_length, index, n1_num, n2_num;
	int n1_length = _strlen(n1), n2_length = _strlen(n2), carry_out = 0;

	if (n1_length > n2_length)
		max_length = n1_length;
	else
		max_length = n2_length;
	if (max_length + 1 > size_r)
		return (0);

	r[max_length] = '\0';

	index = max_length - 1;
	while (index >= 0)
	{
		n1_length--;
		n2_length--;
		if (n1_length >= 0)
			n1_num = n1[n1_length] - 48;
		else
			n1_num = 0;
		if (n2_length >= 0)
			n2_num = n2[n2_length] - 48;
		else
			n2_num = 0;
		r[index] = (n1_num + n2_num + carry_out) % 10 + 48;
		carry_out = (n1_num + n2_num + carry_out) / 10;
		index--;
	}

	if (carry_out == 1)
	{
		r[max_length + 1] = '\0';
		if (max_length + 2 > size_r)
			return (0);
		while (max_length-- >= 0)
			r[max_length + 1] = r[max_length];
		r[0] = carry_out + 48;
	}
	return (r);
}
