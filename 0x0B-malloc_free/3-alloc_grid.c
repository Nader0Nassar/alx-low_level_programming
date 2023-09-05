#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - This function creats 2D Array
 * @width: width of array
 * @height: height of the array
 * Return: Pointer or Null
 */
int **alloc_grid(int width, int height)
{
	int w_index, h_index;
	int **zeros_Grid;

	if (width == 0 || height == 0)
		return (NULL);

	zeros_Grid = malloc(sizeof(int *) * height);

	if (zeros_Grid == NULL)
		return (NULL);
	for (h_index = 0; h_index < height; h_index++)
	{
		zeros_Grid[h_index] = malloc(sizeof(int) * width);
		if (zeros_Grid[h_index] == NULL)
		{
			for (h_index; h_index >= 0; h_index--)
			{
				free(zeros_Grid[h_index]);
			}
			free(zeros_Grid);
			return (NULL);
		}
	}
	for (h_index = 0; h_index < height; h_index++)
	{
		for (w_index = 0; w_index < width; w_index++)
		{
			zeros_Grid[h_index][w_index] = 0;
		}
	}
	return (zeros_Grid);
}
