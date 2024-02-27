#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int i = 0;
	int a, b;
	char var;

	while (s[i] != '\0')
	{
		i++;
	}

	b = i;
	for (i--, a = 0; a < b / 2; i--, a++)
	{
		var = s[a];
		s[a] = s[i];
		s[i] = var;
	}
}
