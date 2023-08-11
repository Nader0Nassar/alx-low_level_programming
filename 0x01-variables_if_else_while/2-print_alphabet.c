#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print abcdefghijklmnopqrstuvwxyz by putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Ascii_of_small = 'a';

	while (Ascii_of_small <= 'z')
	{
		putchar(Ascii_of_small);
		Ascii_of_small++;
	}
	putchar('\n');
	return (0);
}
