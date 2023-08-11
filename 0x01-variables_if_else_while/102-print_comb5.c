#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print combinations of two distinct digits to 99
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums1, nums2;

	for (nums1 = '0'; nums1 <= '99'; nums1++)
	{
		for (nums2 = '0'; nums2 <= '99'; nums2++)
		{
			if (nums1 != nums2 && nums2 > nums1)
			{
				if (nums1 < 10)
				{
					putchar('0');
				}
				putchar(nums1);
				putchar(' ');
				if (nums2 < 10)
				{
					putchar('0');
				}
				putchar(nums2);
				if (nums1 != '98' || nums2 != '99')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
