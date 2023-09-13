#include <stdio.h>
#include <stdlib.h>
/**
 * main - This function used to print opcodes of it
 * @argc: # of arguments
 * @argv: array of arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	char *array;
	int size, index = 0;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	size = atoi(argv[1]);
	if (size < 0)
	{
		printf("Error\n");
		exit(2);
	}
	array = (char *)main;
	while (index < size)
	{
		printf("%02hhx ", array[index]);
		index++;
	}
	printf("\n");
	return (0);
}
