#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - This function concatenates all the arguments
 * @ac: counts of arg
 * @av: values of arg
 * Return: void
 */
char *argstostr(int ac, char **av)
{
	int r_index = 0, c_index = 0, length = 0, index = 0;
	char *concatenated_Arg;

	if (av == NULL || ac == 0)
		return (NULL);

	for (r_index = 0; r_index < ac; r_index++)
	{
		for (c_index = 0; av[r_index][c_index]; c_index++)
			length++;
	}
	length += ac;

	concatenated_Arg = malloc(sizeof(char) * length + 1);
	if (concatenated_Arg == NULL)
		return (NULL);
	for (r_index = 0; r_index < ac; r_index++)
	{
		for (c_index = 0; av[r_index][c_index]; c_index++)
		{
			concatenated_Arg[index] = av[r_index][c_index];
			index++;
		}
		if (concatenated_Arg[index] == '\0')
		{
			concatenated_Arg[index++] = '\n';
		}
	}
	return (concatenated_Arg);
}
