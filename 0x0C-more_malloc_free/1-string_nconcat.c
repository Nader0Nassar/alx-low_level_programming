#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - This function concatenates string s1 and n bytes of s2
 * @s1: 1st string
 * @s2: 2nd string
 * @n: number of bytes from 2nd string
 * Return: Pointer or Null
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index, length_s1, length_s2, num_of_bytes;
	char *concatenated_String;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	index = 0;
	length_s1 = strlen(s1);
	length_s2 = strlen(s2);
	if (n >= length_s2)
		num_of_bytes = length_s2;
	else
		num_of_bytes = n;
	concatenated_String = malloc(length_s1 + num_of_bytes + 1);
	if (concatenated_String == NULL)
		return (NULL);
	while (index < length_s1 + num_of_bytes)
	{
		if (index < length_s1)
			*(concatenated_String + index) = s1[index];
		else if (index >= length_s1 && index < length_s1 + num_of_bytes)
			*(concatenated_String + index) = s2[index - length_s1];
		index++;
	}
	return (concatenated_String);
}
