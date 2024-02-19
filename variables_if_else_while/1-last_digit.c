#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, int2;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

    int2 = n % 10;
	if (int2 > 5)

	if (int2 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, int2);
	}
	if (int2 == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, int2);
	}
	if (int2 < 6 && int2 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, int2);
	}
	return (0);
}
