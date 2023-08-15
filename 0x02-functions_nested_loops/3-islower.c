#include "main.h"

/**
 * _islower -  check the char is lower or upper
 *
 * @c: the input character
 *
 * Return: On success 1.
 */
int _islower(int c)
{
	(c <= 122 && c >= 97) ? return (1) : return (0);
}
