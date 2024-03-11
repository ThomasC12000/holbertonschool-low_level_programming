#include "main.h"

/**
 * create_array - creates an array of chars, and initializes it with a specific char.
 * @size: the size of the memory to print.
 * @c: String
 * Return: pointer to the array, or NULL if it fails.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size > 0)
	{
		p = malloc(size * sizeof(char));
		if (p == NULL)
		return (NULL);
	}
	else
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	return(p);
}
