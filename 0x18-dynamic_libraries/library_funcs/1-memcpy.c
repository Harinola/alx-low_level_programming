#include "main.h"
/**
 * _memcpy - copies 'n' bytes from memeory 'src' to memory 'dest'.
 * @dest: address of the string to be worked on.
 * @src: address of the string to be copied.
 * @n: amount of bytes to be copied from 'src'.
 *
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *a = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (a);
}
