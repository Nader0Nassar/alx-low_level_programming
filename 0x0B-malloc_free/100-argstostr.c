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
	while (r_index < ac)
	{
		while (av[r_index][c_index])
		{
			length++;
			c_index++;
		}
		r_index++;
	}
	length += ac;
	concatenated_Arg = malloc(sizeof(char) * length + 1);
	if (concatenated_Arg == NULL)
		return (NULL);
	r_index = 0;
	while (r_index < ac)
	{
		c_index = 0;
		while (av[r_index][c_index])
		{
			concatenated_Arg[index] = av[r_index][c_index];
			index++;
			c_index++;
		}
		if (concatenated_Arg[index] == '\0')
			concatenated_Arg[index++] = '\n';
		r_index++;
	}
	return (concatenated_Arg);
}
