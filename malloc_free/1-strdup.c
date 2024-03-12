#include "main.h"

/**
 * _strdup - copies a string into a new buffer
 * @str: the string to copy
 * Return: pointer to a new buffer
 */
char *_strdup(char *str)
{
	char *p;
	unsigned int len, j;

	if (str == NULL)
	{
		return (NULL);
	}
	for (len = 0; str[len] != '\0'; len++)
	{
		;
	len++;
	}

	p = malloc((len + 1)* sizeof(char));
	
	if (p == NULL)
	{
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		p[j] = str[j];
	}
	p[j] = '\0';
	return (p);
}
