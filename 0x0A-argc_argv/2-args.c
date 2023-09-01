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
	int index;

	for (index = 0; index <= argc - 1; index++)
	{
		printf("%s\n", argv[index]);
	}
	return (0);
}
