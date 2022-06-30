#include "main.h"
#include <stdlib.h>
/**
 * _memset - initiates memory with a constant byte.
 * @m: memory area to fill.
 * @b: constant byte to fill memory with.
 * @n: amount of spaces to be filled.
 *
 * Return: pointer to memory area m.
 */
char *_memset(char *m, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		m[i] = b;
		i++;
	}

	return (m);
}

/**
 * _calloc - Allocates a memory for an array using malloc.
 * @nmemb: Number of elements in the array.
 * @size: size of the type of the elements of the array.
 *
 * Return: A pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (size <= 0 || nmemb <= 0)
		return (NULL);

	ptr = malloc(size * nmemb);
	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nmemb);

	return (ptr);
}
