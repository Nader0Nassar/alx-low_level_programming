#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print all small and Capital Letters by putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Ascii_of_small = 'a';
	int Ascii_of_Capital = 'A';

	while (Ascii_of_small <= 'z')
	{
		putchar(Ascii_of_small);
		Ascii_of_small++;
	}
	while (Ascii_of_Capital <= 'Z')
	{
		putchar(Ascii_of_Capital);
		Ascii_of_Capital++;
	}
	putchar('\n');
	return (0);
}
