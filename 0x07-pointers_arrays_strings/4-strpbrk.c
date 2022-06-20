#include "main.h"
/**
 * _strpbrk - searches a given string for the first occurence of
 * a byte from a set of given bytes.
 * @s: the address of the given string.
 * @accept: the address of the substring that composes of the set of bytes.
 *
 * Return: address to the first occurence of any of the bytes from "accept"
 * in 's'.
 */
char *_strpbrk(char *s, char *accept)
{
	int i;
	char *a = NULL;

	while (*s != '\0')
	{
		for (i = 0; ; i++)
		{
			if (*(accept + i) == '\0')
			{
				break;
			}
			if (*s == *(accept + i))
			{
				a = s;
				break;
			}
		}

		s++;
	}

	return (a);
}
