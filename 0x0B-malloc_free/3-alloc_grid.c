#include "main.h"
/**
 * **alloc_grid-fuction allocating two dimention and intilizing to 0
 * @width:width of the grid
 * @height:height of the grid
 * Return:NULL
 */
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0)
	{
		return (NULL);
	}
	if (height <= 0)
	{
		return (NULL);
	}

	grid = (int **)malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
	grid[i] = (int *)malloc(width * sizeof(int));
	if (grid[i] == NULL)
	{
		for (j = 0; j < i; j++)
		{
		free(grid[j]);
		}
	free(grid);
	return (NULL);
	}
	for (j = 0; j < width; j++)
	{
		grid[i][j] = 0;
	}
	}
	return (grid);
}