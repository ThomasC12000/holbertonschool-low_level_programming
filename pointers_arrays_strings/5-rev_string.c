#include "main.h"

/**
 * rev_string - Reverses a string.
 * @s: String
 */
void rev_string(char *s)
{
	int i, a, b;
	char var;

	for (i = 0; s[i] != '\0'; i++);

	b = i;
	for (i--, a = 0; a < b / 2; i--, a++)
	{
		var = s[a];
		s[a] = s[i];
		s[i] = var;
	}
}
