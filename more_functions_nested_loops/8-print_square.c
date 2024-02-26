#include "main.h"

/**
 * print_square - Prints a square.
 * @size: size of the square.
 */
void print_square(int size)
{
	int len, i;

		if (size <= 0)
		{
			_putchar('\n');
		}
		else
		{
				for (len = 0; len < size; len++)
				{
					for (i = 0; i < size; i++)
				{
					_putchar(35);
				}
					_putchar(35);
					_putchar('\n');
				}
	}
}
