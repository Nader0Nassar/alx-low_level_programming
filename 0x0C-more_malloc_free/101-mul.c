#include "main.h"
#include <stdlib.h>
#include <stdio.h>

void _puts(char *);
long int _atoi(char *);
void print_number(unsigned long int);
int _isdigit(char *);

/**
 * main - Main Function
 * @argc: # of arg
 * @argv: Array of arg
 *
 * Return: zero
 */
int main(int argc, char **argv)
{
	if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
	{
		_puts("Error");
		exit(98);
	}
	else
	{
		print_number(_atoi(argv[1]) * _atoi(argv[2]));
		_putchar('\n');
	}
	return (0);
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
/**
 * print_number - prints a number
 * @n:  The printed number
 * Return: void
 */
void print_number(unsigned long int n)
{
	if ((n / 10) > 0)
		print_number(n / 10);
	_putchar('0' + (n % 10));
}
/**
 * _atoi - convert a string to an integer
 * @s: string
 * Return: number
 */
long int _atoi(char *s)
{
	int i = 0, index = 0, sign_before = 1;
	unsigned long int value = 0;

	while (s[index] != '\0')
	{
		while (s[i] < 48 || s[i] > 57)
		{
			if (s[i] == 45)
				sign_before *= -1;
			i++;
		}
		if (s[index] >= 48 && s[index] <= 57)
		{
			value = value * 10 + s[index] - 48;
			if (s[index + 1] < 48 || s[index + 1] > 57)
				break;
		}
		index++;
	}
	return (sign_before * value);
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
