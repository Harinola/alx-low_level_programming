#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Reallocates a memory block using malloc and free.
 * @ptr: Given memory block.
 * @old_size: Previous size in bytes of the memory block.
 * @new_size: New size in bytes of the memory block.
 *
 * Return: pointer to the memory block of nes size.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n_ptr;
	char *o_ptr;
	unsigned int i;

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}

	if (!ptr)
		return (malloc(new_size));

	n_ptr = malloc(new_size);
	if (!n_ptr)
		return (NULL);

	o_ptr = ptr;

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			n_ptr[i] = o_ptr[i];
	}
	else if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			n_prt[i] = 0_prt[i];
	}

	free(ptr);
	return (n_ptr);

}
