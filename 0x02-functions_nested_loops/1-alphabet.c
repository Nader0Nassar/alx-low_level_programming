#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int counter = 0;

	for (counter; counter <= 26; counter++)
	{
		_putchar('a' + counter);
	}
	_putchar('\n');
}
