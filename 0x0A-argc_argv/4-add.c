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
	char *num_char;
	int Add_store = 0;

	argc--;
	if (argc != 1)
	{
		for (; argc != 0; argc--)
		{
			for (num_char = argv[argc]; *num_char; num_char++)
			{
				if (*num_char < 48 || *num_char > 57)
				{
					printf("Error\n");
					return (0);
				}
			}
			Add_store = Add_store + atoi(argv[argc]);
		}
	}
	printf("%d\n", Add_store);
	return (0);
}
