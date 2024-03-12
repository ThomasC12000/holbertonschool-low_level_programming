#include "main.h"

/**
 * alloc_grid - Allocate a 2D array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: Pointer to the allocated grid
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **table;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	table = malloc(width * sizeof(int *));

	if (table == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		table[i] = malloc(height * sizeof(int));
		if (table[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(table[i]);
			}
			free(table);
		}
		for (j = 0; j < height; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
