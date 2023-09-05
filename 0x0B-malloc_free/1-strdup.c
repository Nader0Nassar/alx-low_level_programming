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
	char *dublicated_String = malloc(strlen(str));
	int index = 0, length = strlen(str);

	if (str == NULL || dublicated_String == NULL)
		return (NULL);
	while (index < length)
	{
		*(dublicated_String + index) = str[index];
		index++;
	}
	return (dublicated_String);
}
