#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src.
 * @dest: String
 * @src: String
 * Return: Pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

		while (src[i] >= '\0')
		{
			if (src[i] != '\0')
			{
					dest[i] = src[i];
			}
			else 
			{
				dest[i] = '\0';
			}
			 i++;
		}
	return (dest);
}
