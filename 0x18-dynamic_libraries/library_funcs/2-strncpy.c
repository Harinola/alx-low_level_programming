#include "main.h"
/**
 * _strncpy - copy the content of one string to another string.
 * @dest: the destination string.
 * @src: the source string.
 * @n: the number of characters to be copied from src to dest.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *a = dest;

	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	if (*src == '\0')
	{
		*dest = '\0';
		while (n > 0)
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}

	return (a);
}
