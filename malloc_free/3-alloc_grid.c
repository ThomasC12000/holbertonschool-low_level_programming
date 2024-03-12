#include "main.h"

/**
 * str_concat - concatenate two strings into a new buffer
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a new buffer containing the concatenated strings
 */
int **alloc_grid(int width, int height)
{
	int i, j;

	int **table = malloc(width * sizeof(int*));

	for (i = 0; i < width; i++)
	{
		table[i] = malloc(height * sizeof(int));
		for (j = 0; j < height; j++)
		{
			table[i][j] = 0;
		}
	}
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	return (table);
}
