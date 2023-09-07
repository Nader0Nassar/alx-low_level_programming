#include "main.h"
#include <stdlib.h>

void _puts(char *);
int _isdigit(char *);
int _strlen(char *);
/**
 * main - Main Function
 * @argc: # of arg
 * @argv: Array of arg
 * Return: zero
 */
int main(int argc, char *argv[])
{
	char *num1, *num2;
	int length_num1, length_num2, length_multip, i, index = 0;
	int rem, n1, n2, *multip, c = 0;

	num1 = argv[1], num2 = argv[2];
	if (argc != 3 || !_isdigit(num1) || !_isdigit(num2))
	{
		_puts("Error");
		exit(98);
	}
	length_num1 = _strlen(num1);
	length_num2 = _strlen(num2);
	length_multip = length_num1 + length_num2 + 1;
	multip = malloc(sizeof(int) * length_multip);
	if (multip == NULL)
		return (1);
	while (index < length_multip)
	{
		multip[index] = 0;
		index++;
	}
	length_num1--;
	length_num2--;

	while (length_num1 >= 0)
	{
		n1 = num1[length_num1] - '0';
		rem = 0;
		while (length_num2 >= 0)
		{
			n2 = num2[length_num2] - '0';
			rem += multip[length_num1 + length_num2 + 1] + (n1 * n2);
			multip[length_num1 + length_num2 + 1] = rem % 10;
			rem /= 10;
			length_num2--;
		}
		if (rem > 0)
			multip[length_num1 + length_num2 + 1] += rem;
		length_num1--;
	}
	for (i = 0; i < length_multip - 1; i++)
	{
		if (multip[i])
			c = 1;
		if (c)
			_putchar(multip[i] + '0');
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
 * @string: string to compute the length of it
 * Return: Always 0
 */
int _strlen(char *string)
{
	int index = 0;

	while (string[index] != '\0')
	{
		index++;
	}
	return (index);
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
