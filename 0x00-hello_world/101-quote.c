#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	string Qu = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, Qu, sizeof(Qu));

	return (1);
}
