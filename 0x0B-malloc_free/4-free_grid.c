#include "main.h"
#include <stdlib.h>

/**
 * free_grid - print the grid integer
 * @grid: the adress of the two dimensional grid
 * @height: height of the grid
 * @Return: free_grid
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
