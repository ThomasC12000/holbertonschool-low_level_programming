#include "main.h"

/**
 * _strstr - that locates a substring.
 * @haystack: String
 * @needle: String
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int a, b;
	char *p;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (haystack[b] == needle[b])
			{
				p = &needle[a];
				return (p);
			}
		}
	}
	return (NULL);
}
