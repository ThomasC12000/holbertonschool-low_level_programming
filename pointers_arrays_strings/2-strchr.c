#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: String
 * @c: String
 * Return: first occurrence of the character c in the string s, or NULL
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
		i++;
	}
	return (NULL);
}
