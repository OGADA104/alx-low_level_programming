#include "main.h"
#include<stdlib.h>
/**
 *free_grid - free memory allocated earlier
 *@grid: grid earlier created
 *@height: height of grid
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (height < 1)
	{
		free(grid);
	}
	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
