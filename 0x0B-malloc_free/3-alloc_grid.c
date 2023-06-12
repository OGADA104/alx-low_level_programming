#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 *int **alloc_grid - allocate grid
 *@width: width of grid
 *@height: height of grid
 *Return: pointet to grid or null
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j, k;

	if (width < 1 || height < 1)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid != NULL)
	{
		for (i = 0; i < height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
			if (grid[i] != NULL)
			{
				for (j = 0; j < width; j++)
				{
					grid[i][j] = 0;
					printf("%d ", grid[i][j]);
				}
				printf("\n");
			}
			else
			{
				for (k = 0; k < 0; k++)
			{
				free(grid[k]);
			}
			free(grid);
			return (NULL);
			}
		}
		printf("\n");
	}
		return (grid);
}
