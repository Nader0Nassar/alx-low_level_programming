#include "main.h"
/**
 * get_endianness - This function checks the endianness.
 * Return: 0 or 1.
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *character = (char *) &a;

	return (*character);
}
