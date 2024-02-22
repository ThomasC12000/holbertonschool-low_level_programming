#include "main.h"

/**
 * times_table -  prints the 9 times table
 */
void times_table(void)
{
	int num1, num2, total;

	for (num1 = 0; num1 <= 9; num1++)
	{
		_putchar('0');

		for (num2 = 1; num2 <= 9; num2++)
		{
			_putchar(',');
			_putchar(' ');

			total = num1 * num2;

			if (total <= 9)
				_putchar(' ');
			else
				_putchar((total / 10) + '0');

			_putchar((total % 10) + '0');
		}
		_putchar('\n');
	}
}
