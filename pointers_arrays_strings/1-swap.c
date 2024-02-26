#include "main.h"

/**
 * swap_int - Swaps the values of two integers.
 * @n: Pointer.
 */
void swap_int(int *a, int *b)
{
	int var;

	var = *a;
	*a = *b;
	*b = var;
}
