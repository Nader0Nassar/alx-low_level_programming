#include "main.h"

/**
 * string_toupper - This function changes lowercase letters to uppercases.
 * @lower_string: array of integers.
 *
 * Return: Always 0
 */

char *string_toupper(char *lower_string)
{
	int index, Ascii_of_char;

	for (index = 0; lower_string[index] != '\0'; index++)
	{
		Ascii_of_char = lower_string[index];
		if (Ascii_of_char >= 97 && Ascii_of_char <= 122)
			lower_string[index] -= 32;
	}
	return (lower_string);
}
