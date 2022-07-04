#include <stdlib.h>
#include <stdio.h>
#include "dog.h"
/**
 * print_dog - prints the dtails of the struct dog to the output.
 * @d: pointer to the given struct dog.
 *
 * Return: Nothing.
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if (d->name == NULL)
		d->name = "(nil)";
	printf("Name: %s\n", d->name);

	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Owner: %s\n", d->owner);
}
