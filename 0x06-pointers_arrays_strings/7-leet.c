#include "main.h"

/**
 * leet - This function encodes a string into 1337
 * @coded_string: The string will be coded.
 *
 * Return: Always 0
 */

char *leet(char *coded_string)
{
	int index1, index2;
	char coded_char[] = "AEOTLaeotl";
	char code[] = "4307143071";

	for (index1 = 0; coded_string[index1] != '\0'; index1++)
	{
		for (index2 = 0; coded_char[index2] != '\0'; index2++)
		{
			if (coded_string[index1] == coded_char[index2])
			{
				coded_string[index1] = code[index2];
			}
		}
	}
	return (coded_string);
}
