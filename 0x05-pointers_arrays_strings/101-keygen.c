#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>


/**
 * main - creat random password.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i, pass_Length = 20, type_of_Char;
	char random_Password[pass_Length + 1];
    char lower[] = "abcdefghijklmnopqrstuvwxyz";
    char upper[] = "ABCDEFGHIJKLMNPQRSTUVWXYZ";
    char digit[] = "0123456789";
    char symbol[] = "@#$^&*(){}_|<>,./?";    
    srand(time(NULL));
    for (i = 0; i < pass_Length; i++)
    {
        type_of_Char = rand() % 4;
        if (type_of_Char == 0)
            random_Password[i] = lower[rand() % sizeof(lower) - 1];
        else if (type_of_Char == 1)
            random_Password[i] = upper[rand() % sizeof(upper) - 1];
        else if (type_of_Char == 2)
            random_Password[i] = digit[rand() % sizeof(digit) - 1];
        else if (type_of_Char == 0)
            random_Password[i] = symbol[rand() % sizeof(symbol) - 1];
    }
    random_Password[pass_Length] = '\0';
    printf("%s\n", random_Password);
	return (0);
}
