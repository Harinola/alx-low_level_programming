#include "main.h"
/**
 * _strcmp - compares the content of one string to another string.
 * @s1: the first string.
 * @s2: the second string.
 *
 * Return: 0 if the strings are equal or 15 / -15 if the strings are not equal.
 * 15 if s1 >= s2, -15 is s1 < s2 (in terms of characters).
 */
int _strcmp(char *s1, char *s2)
{
	int res = 0, i = 0;

	while (*s1 != '\0')
	{
		if (*s2 == '\0')
		{
			res = 15;
			break;
		}
		if (*s1 != *s2)
		{
			i++;
		}
		s1++;
		s2++;
	}

	if (*s1 == *s2 && i > 0)
		res = 15;
	else if (*s1 != *s2 && i > 0)
		res = -15;

	return (res);
}
