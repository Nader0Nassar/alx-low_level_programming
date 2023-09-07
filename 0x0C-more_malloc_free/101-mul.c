#include "main.h"
#include <stdlib.h>

void _puts(char *);
int _isdigit(char *);
int _strlen(char *);

/**
 * main - Main Function
 * @argc: # of arg
 * @argv: Array of arg
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
	char *num1, *num2;
	int *multip;
	int length_num1, length_num2, length_multip, index = 0;
	int index1, index2, n1, n2, rem, multip_index = 0, c;

	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error");
		exit(98);
	}
	num1 = argv[1];
	num2 = argv[2];
	length_num1 = _strlen(num1);
	length_num2 = _strlen(num2);
	length_multip = length_num1 + length_num2 + 1;
	multip = malloc(sizeof(int) * length_multip);
	if (multip == NULL)
		return (1);
	while (index < length_multip)
		multip[index++] = 0;
	index1 = length_num1 - 1;
	while (index1 >= 0)
	{
		n1 = num1[index1] - 48;
		rem = 0;
		index2 = length_num2 - 1;
		while (index2 >= 0)
		{
			n2 = num2[index2] - 48;
			rem = rem + multip[index1 + index2 + 1] + (n1 * n2);
			multip[index1 + index2 + 1] = rem % 10;
			rem = rem / 10;
			index2--;
		}
		if (rem > 0)
			multip[index1 + index2 + 1] = multip[index1 + index2 + 1] + rem;
		index1--;
	}
	for (multip_index = 0; multip_index < length_multip - 1; multip_index++)
	{
		if (multip[multip_index])
			c = 1;
		if (c)
			_putchar(multip[multip_index] + 48);
	}
	if (!c)
		_putchar('0');

	_putchar('\n');
	free(multip);
	return (0);
}
/**
 * _puts -  prints a string
 * @str: The printed string
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
/**
 * _strlen -  returns the length of a string
 * @s: string to compute the length of it
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
 * _isdigit - checks for digits 0:9
 * @string: The input to check
 * Return: On success 1.
 */
int _isdigit(char *string)
{
	int index = 0;

	while (string[index] != '\0')
	{
		if (string[index] < '0' || string[index] > '9')
			return (0);
		index++;
	}
	return (1);
}
