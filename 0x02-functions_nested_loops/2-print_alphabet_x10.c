#include "main.h"

/**
 * print_alphabet_x10 -  prints the alphabet 10 times , followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int Ascii_of_small;
	int rows = 1;

	while (rows <= 10)
	{
		Ascii_of_small = 'a';
		while (Ascii_of_small <= 'z')
		{
			_putchar(Ascii_of_small);
			Ascii_of_small++;
		}
		_putchar('\n');
		rows++;
	}
}
