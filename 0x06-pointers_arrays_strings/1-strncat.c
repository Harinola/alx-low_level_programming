#include "main.h"
/**
 * _strncat - joins two strings together.
 * @dest: the destination string.
 * @src: the source string.
 * @n: maximum number of bytes to be joined to dest from src.
 *
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	for (i = 0; i < n; i++)
	{
		if (*(src + i) == '\0')
		{
			break;
		}

		*(dest + i) = *(src + i);

	}

	*(dest + i) = '\0';

	return (a);
}
