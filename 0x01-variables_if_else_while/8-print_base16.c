#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print all numbers of base16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int B16_nums = '0';
	int B16_char = 'a';

	while (B16_nums <= '9')
	{
		putchar(B16_nums);
		B16_nums++;
	}
	while (B16_char <= 'f')
	{
		putchar(B16_char);
		B16_char++;
	}
	putchar('\n');
	return (0);
}
