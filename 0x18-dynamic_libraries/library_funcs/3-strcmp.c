#include "main.h"
/**
 * _strcmp - compares the content of one string to another string.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if the strings are equal or difference between the ASCII values of
 * the first different characters.
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0;

	while (*s1 != '\0')
	{
		if (*s1 != *s2)
		{
			res = *s1 - *s2;
			break;
		}
		s1++;
		s2++;
	}

	return (res);
}
