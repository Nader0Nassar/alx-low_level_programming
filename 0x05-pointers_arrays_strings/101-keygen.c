#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
 * main - creat random password.
 *
 * Return: Always 0.
 */

int main(void)
{
	char random_Char;
	int i = 2645, j = 2772, chars_Ascii = 0;

	srand(time(NULL));
	while (chars_Ascii <= i)
	{
		random_Char = rand() % 128;
		chars_Ascii = chars_Ascii + random_Char;
		printf("%c", random_Char);
	}
	printf("%c\n", j - chars_Ascii);

	return (0);
}
