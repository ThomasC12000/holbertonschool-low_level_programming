#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 * @s: String
 * @accept: String
 * Return: number of bytes in the initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, i;

	unsigned int k = 0;
	unsigned int somme = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				k = 1;
			}
		}
		if (k == 1)
		{
			somme += 1;
			k = 0;
			continue;
		}
		if (k == 0 && somme > 0)
		break;
	}
	return (somme);
}
