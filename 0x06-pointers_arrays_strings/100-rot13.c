#include "main.h"

/**
 * rot13 - This function  encodes a string using rot13
 * @coded_string: The string will be coded.
 *
 * Return: Always 0
 */

char *rot13(char *coded_string)
{
	int index1, index2;
	char coded_char[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index1 = 0; coded_string[index1] != '\0'; index1++)
	{
		for (index2 = 0; coded_char[index2] != '\0'; index2++)
		{
			if (coded_string[index1] == coded_char[index2])
			{
				coded_string[index1] = code[index2];
				break;
			}
		}
	}
	return (coded_string);
}
