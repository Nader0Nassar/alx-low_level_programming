#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print combinations of two distinct digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums1, nums2;

	for (nums1 = '0'; nums1 <= '9'; nums1++)
	{
		for (nums2 = '0'; nums2 <= '9'; nums2++)
		{
			if (nums1 != nums2 && nums2 > nums1)
			{
				putchar(nums1);
				putchar(nums2);
				if (nums1 != '8' || nums2 != '9')
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
