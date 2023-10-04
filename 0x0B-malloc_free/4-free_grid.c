#include "main.h"
#include <stdlib.h>

/**
 * free_grid- function that frees a 2 dimensional grid
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 * Return: always 0 success
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
		free(grid);
		grid = NULL;
}
