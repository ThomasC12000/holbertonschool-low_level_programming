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

	table = malloc(sizeof(int *) * height);

	if (table == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		table[i] = malloc(sizeof(int) * width);
		if (table[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(table[i]);
			}
			free(table);
		}
		for (j = 0; j < width; j++)
		{
			table[i][j] = 0;
		}
	}
	return (table);
}
