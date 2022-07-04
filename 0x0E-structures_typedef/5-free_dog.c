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
	if (d->name != NULL)
		free(d->name);
	if (d->owner != NULL)
		free(d->owner);
	if (d != NULL)
		free(d);
}
