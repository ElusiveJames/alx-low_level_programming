/**
  *free_grid - free mem allocated to grid
  *@grid: grid present in memeory
  *@height: height of the grid
  */
#include "main.h"
#include <stdlib.h>
void free_grid(int **grid, int height)
{
	if (grid != NULL && height != 0)
	{
		for (; height >= 0; height--)
			free(grid[height]);
		free(grid);
	}
}
