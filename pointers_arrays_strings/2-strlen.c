#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @s: String.
 * Return: Value of a.
 */
int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
