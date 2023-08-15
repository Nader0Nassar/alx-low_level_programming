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
	if (Num < 0)
		return (_abs(Num % 10));
	else
		return (Num % 10);
}
