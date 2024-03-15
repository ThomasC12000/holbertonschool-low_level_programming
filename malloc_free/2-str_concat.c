#include "main.h"

/**
 * str_concat - concatenate two strings into a new buffer
 * @s1: the first string
 * @s2: the second string
 * Return: pointer to a new buffer containing the concatenated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	unsigned int len, len2, j, k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (len = 0; s1[len] != '\0'; len++)
	;
	for (len2 = 0; s2[len2] != '\0'; len2++)
	;

	p = malloc((len + len2 + 1) * sizeof(char));
	
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (j = 0; j < len; j++)
	{
		p[j] = s1[j];
	}
	for (k = 0; k < len2; k++)
	{
		p[j + k] = s2[k];
	}
	p[j + k] = '\0';
	return (p);
}
