#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function duplicates string
 * @str: a string will be duplicated
 * Return: Pointer or Null
 */
char *_strdup(char *str)
{
	char *dublicated_String = malloc(strlen(str) + 1);
	int index = 0, length = strlen(str);

	if (dublicated_String == NULL)
		return (NULL);
	while (index < length)
	{
		*(dublicated_String + index) = str[index];
		index++;
	}
	dublicated_String[index] = '\0';
	return (dublicated_String);
}
