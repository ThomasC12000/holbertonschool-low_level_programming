#include "main.h"

/**
 * print_diagonal - Draws a diagonal line on the terminal.
 * @n: int value
 */
void print_diagonal(int n)
{
	int len, i;

		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
				for (len = 0; len < n; len++)
				{
					for (i = 0; i < len; i++)
				{
					_putchar(' ');
				}
					_putchar(92);
					_putchar('\n');
				}
		_putchar('\n');
	}
}
