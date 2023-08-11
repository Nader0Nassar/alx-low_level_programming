#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print 0123456789
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int SD_nums;

	for (SD_nums = 0; SD_nums <= 9; SD_nums++)
	{
		printf("%d", SD_nums);
	}
	printf("\n");
	return (0);
}
