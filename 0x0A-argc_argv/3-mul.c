#include "main.h"
#include <stdio.h>
#include <stdlib.h>

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
	int multip;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		multip = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", multip);
	}
	return (0);
}
