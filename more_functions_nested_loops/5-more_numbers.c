#include "main.h"

/**
 * print_most_numbers - Prints numbers 0 to 9, without 2 and 9.
 */
void more_numbers(void)
{
	int line, number;

	for (line = 0; line < 10; line++)
	{
		for (number = 0; number <= 14; number++)
		{
			if (number > 9)
			{
				_putchar((number / 10) + '0');
			}
			_putchar((number % 10) + '0');
		}
		_putchar('\n');
	}
}
