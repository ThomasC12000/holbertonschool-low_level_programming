#include "main.h"

/**
 * _strstr - that locates a substring.
 * @haystack: String
 * @needle: String
 * Return: pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c;

	i = 0;
	c = 0;
	while (haystack[i] != '\0')
	{
		j = 0;
		while (needle[j + c] != '\0' && haystack[i + c] != '\0'
&& needle[j + c] == haystack[i + c])
		{
			if (haystack[i + c] != needle[j + c])
			{
				break;
			}
			c++;
		}
			if (needle[j + c] == '\0')
			{
				return (&haystack[i]);
			}
			j++;
			i++;
		}
	return (NULL);
}
