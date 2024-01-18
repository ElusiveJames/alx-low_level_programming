/**
  *alloc_grid - return a pointer to a 2d array
  *@height: heigght of the array
  *@width: width of the  array
  *Return: pointer to the array
  */
#include <stdlib.h>
#include "main.h"
int **alloc_grid(int width, int height)
{
	int **matrix;
	int i, j;

	if (height <= 0 || width <= 0)
		return (NULL);
	matrix  = malloc(sizeof(int *) * height);
	if (matrix == NULL)
	{
		free(matrix);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		matrix[i] = malloc(width * sizeof(int));
		if (matrix[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(matrix[i]);
			free(matrix);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			matrix[i][j] = 0;
	}
	return (matrix);
	}
