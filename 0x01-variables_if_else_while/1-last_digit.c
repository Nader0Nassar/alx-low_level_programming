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
	int LDigit;/* Allocate 4 Bytes for Last_Digit */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	LDigit = n % 10;/* Last digit is the remainder of dividing by 10 */
	if (LDigit > 5)/* Creat if statement to complete the printed sentence */
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, LDigit);
	}
	else if (LDigit == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, LDigit);
	}
	else if (LDigit < 6 && LDigit != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, LDigit);
	}
	return (0);
}
