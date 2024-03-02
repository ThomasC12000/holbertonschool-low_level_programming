#include "main.h"

/**
 * _strncpy - compares two strings.
 * @s2: String
 * @s1: String
 * Return: result of ( *s1 - *s2 )
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
