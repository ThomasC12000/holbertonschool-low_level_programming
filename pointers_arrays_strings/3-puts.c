#include "main.h"
#include <string.h>

/**
 * _puts - Prints a string.
 * @str: String.
 * Return: Value of a.
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
