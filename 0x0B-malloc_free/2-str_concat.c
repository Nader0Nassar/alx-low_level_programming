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
	int index = 0, length_s1 = strlen(s1), length_s2 = strlen(s2);
	char *concatenated_String;

	printf("\nlength s1 = %d", length_s1);
	printf("\nlength s2 = %d\n", length_s2);


	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	concatenated_String = malloc(length_s1 + length_s2 + 2);
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
	printf("concatenated_String = %s\n", concatenated_String);
	return (concatenated_String);
}
