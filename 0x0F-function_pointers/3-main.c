#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - This function used to creat simple calculator
 * @argc: # of arg
 * @argv: Array of arg
 * Return: Always 0.
 */
int main(int argc, char **argv)
{
	int num1, num2;
	char *oper;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	num2 = argv[3];
	oper = argv[2];
	if (oper[1] != '\0' || get_op_func(oper) == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*oper == '/' || *oper == '%') && (num2 == 0))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(oper)(num1, num2));

	return (0);
}
