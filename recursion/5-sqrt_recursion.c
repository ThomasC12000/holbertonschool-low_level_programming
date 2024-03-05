#include "main.h"

/**
 * helper - Recursive helper function to find the natural square root.
 * @n: The number to calculate the square root of.
 * @i: The current guess for the square root.
 *
 * Return: The natural square root of n, or -1 if n does not have a natural
 * square root.
 */
int helper(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	if (i * i > n)
	{
		return (-1);
	}
	return helper(n, i + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: Integer
 * Return: natural square root of a number.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (n);
	}
	return helper(n, 1);
}
