#include "main.h"
#include <stdio.h>
/**
 * _strcpy  - a function that copies a string unto another string variable.
 * @dest: pointer to the destination of the copied string.
 * @src: pointer to the source of the copied string.
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	if (dest == NULL)
		return (NULL);

	for (i = 0; ; i++)
	{
		if (*(src + i) == '\0')
		{
			break;
		}

		*(dest + i) = *(src + i);
	}

	*(dest + i) = '\0';

	return (dest);
}
