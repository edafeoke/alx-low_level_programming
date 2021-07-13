#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - alloc memory array
 * @width: width
 * @height: height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int i = 0;
	int j = 0;
	int **grid;

	if (width < 0 || height < 0)
		return (NULL);
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);
	while (i < height)
	{
		grid[i] = (int *) malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (i > 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
