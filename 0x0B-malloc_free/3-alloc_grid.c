#include "main.h"

/**
*alloc_grid - allocates memory for a 2D array
*@width: width of grid
*@height: height of grid
*Return: pointer tto the allocated memory
*/

int **alloc_grid(int width, int height)
{
	int **grid, i, j, grid_size = width * height;

	if (width <= 0 || height <= 0)
		return (NULL);
	
	grid = malloc(grid_size * sizeof(int));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
		for(j = 0; j < width; j++)
			grid[i][j] = 0;
	
	return grid;
}
