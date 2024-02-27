#include "main.h"

/**
 * print_rev - Prints a string, in reverse.
 * @s: String
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (i--; i >= 0; i--)
	_putchar(s[i]);
	_putchar('\n');
}
