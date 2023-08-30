#include "main.h"

/**
 * _sqrt_by_iteration_recursion - This function computes n ^ 0.5 iter. recur.
 *
 * @n: positive integer number
 * @root: # root
 *
 * Return: n ^ 0.5
 */

int _sqrt_by_iteration_recursion(int n, int root)
{
	if (root * root == n)
	{
		return (root);
	}
	else if (root * root > n)
	{
		return (-1);
	}
	return (_sqrt_by_iteration_recursion(n, root + 1));
}

/**
 * _sqrt_recursion - This function computes the value of n ^ 0.5.
 *
 * @n: positive integer number
 *
 * Return: n ^ 0.5
 */

int _sqrt_recursion(int n)
{
	/*Base Rule*/
	if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	/*Recusive Rule*/
	return (_sqrt_by_iteration_recursion(n, 1));
}
