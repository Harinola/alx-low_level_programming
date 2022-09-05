#include "main.h"
/**
 * _strspn - gets the length of the initial span of a prefix substring.
 * @s: the address of the given string.
 * @accept: the address of the substring.
 *
 * Return: the number of bytes in the initial segment of 's' containing bytes
 * from only "accept".
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, spn = 0;

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
				spn++;
				break;
			}
		}
		if (*(accept + i) == '\0')
			break;

		s++;
	}

	return (spn);
}
