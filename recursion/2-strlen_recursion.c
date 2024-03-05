#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: string
 */
int _strlen_recursion(char *s)
{
	int c;

	if (*s == '\0')
	{
		return (0);
	}
	else
	{
	c = 1 + _strlen_recursion(s + 1);
	return (c);
	}
}
