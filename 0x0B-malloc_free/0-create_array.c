#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * create_array - creates an arrays of type char and initializes it
 * with a constant char.
 * @size: size of the array.
 * @c: constant char.
 *
 * Return: pointer to the address of the created array(Success), NULL(Failure).
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = (char *)malloc(sizeof(char) * size);
	if (arr == NULL)
		return (NULL);

	i = 0;

	while (i < size)
	{
		*(arr + i) = c;
		i++;
	}

	*(arr + i) = '\0';

	return (arr);

}
