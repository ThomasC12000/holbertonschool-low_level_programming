#include "main.h"

/**
 * main - Checks for uppercase character.
 * @argc: The character to be checked.
 * @argv: The character to be checked.
 * Return: 1 if 'c' is uppercase, 0 otherwise.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return (0);
}
