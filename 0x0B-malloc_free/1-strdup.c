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
	int index, length;
	char *dublicated_String;

	if (str == NULL)
		return (NULL);
	index = 0;
	length = strlen(str);
	dublicated_String = malloc(length + 1);
	if (dublicated_String == NULL)
		return (NULL);
	while (index < length)
	{
		*(dublicated_String + index) = str[index];
		index++;
	}
	return (dublicated_String);
}
