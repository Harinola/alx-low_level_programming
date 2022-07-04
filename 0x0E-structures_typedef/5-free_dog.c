#include <stdlib.h>
#include "dog.h"
/**
 * free_dog - frees all allocated memory to struct dog and it's members.
 * @d: address of the given struct dog variable.
 *
 * Return: Nothing.
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
