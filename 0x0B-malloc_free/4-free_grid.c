#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * free_grid - This function freeds 2D Array
 * @grid: 2D Array of integers
 * @height: height of the array
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int h_index = 0;

	while (h_index < height)
	{
		free(grid[h_index]);
		h_index++;
	}
	free(grid);
}
