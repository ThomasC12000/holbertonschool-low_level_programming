#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - create a new dog
 * @name: char string name
 * @age: int age
 * @owner: char string owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	struct dog *TOMMY;
	int i, j, k;
	char *n, *o;

	TOMMY = malloc(sizeof(struct dog));

	if (TOMMY == NULL)
	{
		free(TOMMY);
		return (NULL);
	}
	for (i = 0; name[i] != '\0'; i++)
	{
		;
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
		;
	}

	n = malloc(sizeof(char) * i + 1);

	if (n == NULL)
	{
		free(n);
		free(TOMMY);
		return (NULL);
	}

	o = malloc(sizeof(char) * j + 1);

	if (o == NULL)
	{
		free(o);
		free(n);
		free(TOMMY);
		return (NULL);
	}
	for (k = 0; k <= i; k++)
	{
		n[k] = name[k];
	}
	for (k = 0; k <= j; k++)
	{
		o[k] = owner[k];
	}

	TOMMY->name = n; 
	TOMMY->age = age;
	TOMMY->owner = o;

	return (TOMMY);
}
