#include "main.h"

/**
 * print_last_digit -  get the last digit of any number
 *
 * @Num: the input number
 *
 * Return: On success 1.
 */

int print_last_digit(int Num)
{
	int Last;

	if (Num < 0)
		Last = -1 * (Num % 10);
	else
		Last = Num % 10;
	_putchar(Last + 48);
	return (Last);
}
