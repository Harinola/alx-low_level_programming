#include "main.h"
/**
 * _strcat - joins two strings together.
 * @dest: the destination string.
 * @src: the source string
 *
 * Return: pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *a = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (a);
}
