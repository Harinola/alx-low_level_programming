#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
 * new_dog - creates a new dog of type dog_t.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 *
 * Return: adress of new dog(Success),else NULL(Failure).
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	len1 = _strlen(name);
	len2 = _strlen(owner);
	d->name = malloc(sizeof(*name) * (len1 + 1));
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = malloc(sizeof(*owner) * (len2 + 1));
	if (d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	_strcpy(d->name, name);
	_strcpy(d->owner, owner);
	d->age = age;

	return (d);
}

/**
 * _strcpy - copies a string.
 * @dest: destination address of the copied string.
 * @src: source of the copied string.
 *
 * Return: Address to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';

	return (dest);
}

/**
 * _strlen - computes the length of a string.
 * @s: the given string.
 *
 * Return: length of the given string.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;

	return (i);
}
