#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - This function concatenates string s1 and s2
 * @s1: 1st string
 * @s2: 2nd string
 * Return: Pointer or Null
 */
char *str_concat(char *s1, char *s2)
{
	int index, length_s1, length_s2;
	char *concatenated_String;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	index = 0;
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	concatenated_String = malloc(length_s1 + length_s2 + 1);
	if (concatenated_String == NULL)
		return (NULL);
	while (index < length_s1 + length_s2)
	{
		if (index < length_s1)
			*(concatenated_String + index) = s1[index];
		else if (index >= length_s1 && index < length_s1 + length_s2)
			*(concatenated_String + index) = s2[index - length_s1];
		index++;
	}
	return (concatenated_String);
}
