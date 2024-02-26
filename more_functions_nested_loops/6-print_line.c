#include "main.h"

/**
 * print_line - Draws a straight line in the terminal.
 * @n: int value
 */
void print_line(int n)
{
	int len;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
				for (len = 0; len < n; len++)
				{
					_putchar('_');
				}
		_putchar('\n');
	}
}
