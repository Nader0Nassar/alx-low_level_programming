#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print zyxwvutsrqponmlkjihgfedcba by putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Ascii_of_small = 'z';

	while (Ascii_of_small >= 'a')
	{
		putchar(Ascii_of_small);
		Ascii_of_small--;
	}
	putchar('\n');
	return (0);
}
