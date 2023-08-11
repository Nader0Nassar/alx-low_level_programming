#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Source Code to print combinations of three distinct digits
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int nums1, nums2, nums3;

	for (nums1 = '0'; nums1 <= '9'; nums1++)
	{
		for (nums2 = '0'; nums2 <= '9'; nums2++)
		{
			for (nums3 = '0'; nums3 <= '9'; nums3++)
			{
				if (nums1 != nums2 && nums2 != nums3)
				{
					if (nums2 > nums1 && nums3 > nums2)
					{
						putchar(nums1);
						putchar(nums2);
						putchar(nums3);
					if (nums1 != '7' || nums2 != '8' || nums3 != '9')
						{
						putchar(',');
						putchar(' ');
						}
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
