#include "main.h"
#include <string.h>

/**
 * _strlen - Returns the length of a string.
 * @s: Char.
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++);
	return (a);
}
