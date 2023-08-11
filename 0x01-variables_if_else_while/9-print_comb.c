#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print 0, 1, 2, 3, 4, 5, 6, 7, 8, 9
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums;

	for (nums = '0'; nums <= '9'; nums++)
	{
		putchar(nums);
		if (nums != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
