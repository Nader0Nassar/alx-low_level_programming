#include "main.h"

/**
 * print_alphabet -  prints the alphabet, in lowercase 10 times , followed by a new line
 *
 * Return: On success 1.
 */
void print_alphabet_x10(void)
{
	int Ascii_of_small = 'a';
	int rows = 1;
	
	while (rows <= 10)
	{
		while (Ascii_of_small <= 'z')
		{
			_putchar(Ascii_of_small);
			Ascii_of_small++;
		}
		rows++;
	}
	_putchar('\n');
}
