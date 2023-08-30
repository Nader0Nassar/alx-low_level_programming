#include "main.h"

/**
 * _pow_recursion - This function computes the value of x ^ y.
 *
 * @x: Base
 * @y: Power
 *
 * Return: x ^ y
 */

int _pow_recursion(int x, int y)
{
	/*Base Rule*/
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	/*Recusive Rule*/
	return (x * _pow_recursion(x, y - 1));
}
