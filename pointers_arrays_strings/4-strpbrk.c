#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: String
 * @accept: String
 * Return: pointer to the byte in s that matches one of the bytes in accept.
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;
	char *p;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
			{
				p = &s[a];
				return (p);
			}
		}
	}
	return (NULL);
}
