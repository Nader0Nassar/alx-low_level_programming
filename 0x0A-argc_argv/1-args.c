#include "main.h"
#include <stdio.h>

/**
 * main - Main Function
 *
 * @argc: # of arg
 * @argv: Array of arg
 *
 * Return: zero
 */

int main(int argc, char **argv)
{
	printf("%i\n", argc - 1);
	(void) argv;
	return (0);
}
