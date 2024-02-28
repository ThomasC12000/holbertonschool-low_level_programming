#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: String
 * @src: String
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i, length_of_the_string;

	length_of_the_string = 0;

		while (src[length_of_the_string] != '\0')
		{
			length_of_the_string++;
		}
		for (i = 0; i <= length_of_the_string; i++)
		{
			if (src[i] != '\0')
			{
				dest[i] = src[i];
			}
			else 
			{
				dest[i] = '\0';
			}
		}
	return (dest);
}
