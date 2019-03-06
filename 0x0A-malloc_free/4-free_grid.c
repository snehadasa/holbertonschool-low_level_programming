#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created in alloc_grrid.
 * @grid: previous grid
 * @height: height in grid.
 * Return: NULL if size = 0, pointer to the copied string  or NULL if it fails.
 */
void free_grid(int **grid, int height)
{
	int i;

	if (!grid || sizeof(grid) == 0)
	{
		return;
	}
	for (i = 0; i < height; i++)
	{
		if (grid[i] != NULL && sizeof(grid) > 0)
		{
			free(grid[i]);
		}
	}
	free(grid);
}

