#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description: Source Code to determine the last digit and range of it
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int Last_Digit;/* Allocate 4 Bytes for Last_Digit */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Last_Digit = n % 10;/* Last digit is the remainder of dividing by 10 */
	if (Last_Digit > 5)/* Creat if statement to complete the printed sentence */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last_Digit);
	}
	else if (Last_Digit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, Last_Digit);
	}
	else if (Last_Digit < 6 && Last_Digit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last_Digit);
	}
	return (0);
}
