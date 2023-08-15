#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase, followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet(void)
{
	int Ascii_of_small = 'a';

	while (Ascii_of_small <= 'z')
	{
		_putchar(Ascii_of_small);
		Ascii_of_small++;
	}
	_putchar('\n');
}
