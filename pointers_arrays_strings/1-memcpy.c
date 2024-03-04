#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 * @dest: String
 * @src: String
 * @n: unsigned int
 * Return: 
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
