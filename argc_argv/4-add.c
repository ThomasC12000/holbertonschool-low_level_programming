#include "main.h"

/**
 * main - prints the number of arguments passed into it.
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

	for (i = 0; i < argc; i++)
	{
		if (argv[i] >= 0)
		printf("%s\n", argv[i]);
		}		
	return (0);
}
