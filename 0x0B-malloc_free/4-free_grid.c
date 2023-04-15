#include"main.h"
#include<stdlib.h>
/**
 *free_grid - free memory allocated
 *@grid: grid array
 *@height: height of array
 *
 *
 */
void free_grid(int **grid, int height)
{
	int i;

	if (*grid == NULL && height == 0)
		exit(0);
	if (grid == NULL && height > 0)
		exit(0);
	if (height > 0 && grid != NULL)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
	}
	free(grid);
}
