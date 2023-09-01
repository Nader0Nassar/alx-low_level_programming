#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Main Function
 *
 * @argc: # of arg
 * @argv: Array of arg
 *
 * Return: zero
 */

int main(int argc, char **argv)
{
	int index = 0;
	int coins_Values[] = {25, 10, 5, 2, 1};
	int amount_of_Money;
	int minimal_Coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	amount_of_Money = atoi(argv[1]);
	if (amount_of_Money < 0)
	{
		printf("0\n");
		return (0);
	}
	while (coins_Values[index] != '\0')
	{
		if (amount_of_Money >= coins_Values[index])
		{
			minimal_Coins += amount_of_Money / coins_Values[index];
			amount_of_Money = amount_of_Money % coins_Values[index];
			if (amount_of_Money == 0)
				break;
		}
		index++;
	}
	printf("%d\n", minimal_Coins);
	return (0);
}
