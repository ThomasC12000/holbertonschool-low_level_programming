#include "main.h"

/**
 * puts_half - Prints half of a string.
 * @str: String
 */
void puts_half(char *str)
{
	int i;

		for (i = 0; str[i] != '\0'; i++)
		{
			if ((i - 1) / 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
