#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print 0123456789 by using putchar
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int Ascii_of_nums = '0';

	while (Ascii_of_nums <= '9')
	{
		putchar(Ascii_of_nums);
		Ascii_of_nums++;
	}
	putchar('\n');
	return (0);
}
