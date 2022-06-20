#include "main.h"
/**
 * _memset - fills the first 'n' bytes of memory pointed to by 's' by the
 * constant char 'b'.
 * @s: the address of the source string.
 * @b: the constant char used for replacement.
 * @n: the first number of characters to be replaced in the pointed string.
 *
 * Return: pointer to memory area 's'.
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (*s != '\0' && n > 0)
	{
		*s = b;
		s++;
		n--;
	}

	return (a);
}
