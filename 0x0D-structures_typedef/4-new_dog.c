#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * containing a copy of the string given as parameter.
 * @str: string to make a copy of.
 *
 * Return: NULL if size = 0, pointer to the copied string  or NULL if it fails.
 */
char *_strdup(char *str)
{
	char *s;
	int i, j;

	if (!str)
	{
		return ('\0');
	}

	for (i = 0; str[i]; i++)
		;

	s = malloc(sizeof(char) * (i + 1));

	if (!s)
	{
		return ('\0');
	}

	for (j = 0; str[j]; j++)
	{
		s[j] = str[j];
	}

	s[j] = 0;
	return (s);
}
/**
 * new_dog - function that creates a new dog.
 * @name: dog name.
 * @age: dog age.
 * @owner: dog owner.
 * Return: new pointer to the data type dog_t.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new;
	char *i;
	char *j;

	new = malloc(sizeof(dog_t));

	if (!new)
	{
		free(new);
		return ('\0');
	}

	i = _strdup(name);

	if (!i && name)
	{
		free(new);
		return ('\0');
	}

	j = _strdup(owner);

	if (!j && owner)
	{
		free(i);
		free(new);
		return ('\0');
	}

	new->name = i;
	new->age = age;
	new->owner = j;

	return (new);
}
