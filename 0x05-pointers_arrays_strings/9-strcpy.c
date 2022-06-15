#include "main.h"
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

	for (i = 0; ; i++)
	{
		if (*src == '\0')
		{
			*(dest + i) = *src;
			break;
		}

		*(dest + i) = *(src + i);
	}

	return (&i);
}
