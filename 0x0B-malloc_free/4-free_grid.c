/**
  *free_grid - free mem allocated to grid
  *@grid: grid present in memeory
  *@height: height of the grid
  */
#include "main.h"
#include <stdlib.h>
/* free by row*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid != NULL && height > 0)
	{
		for (i = 0; i < height; i++)
			free(grid[i]);
		free(grid);
	}
}
