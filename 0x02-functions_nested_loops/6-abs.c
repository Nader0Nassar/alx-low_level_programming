#include "main.h"

/**
 * _abs -  get the absolute value of any number
 *
 * @any_Number: the input number may be + , - or 0
 *
 * Return: On success 1.
 */

int _abs(int any_Number)
{
	if (any_Number < 0)
		return (-1 * any_number);
	else
		return (any_Number);
}
