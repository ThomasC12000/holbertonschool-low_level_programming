#include "main.h"

/**
 * main - prints its name
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if Success.
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
