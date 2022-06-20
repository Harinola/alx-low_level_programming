#include "main.h"
/**
 * _strchr -locates a given character in a string.
 * @s: the address of the given string.
 * @c: the character to be located.
 *
 * Return: pointer to the character if found, and NULL if not found.
 */
char *_strchr(char *s, char c)
{
	char *a = NULL;

	while (*s != '\0')
	{
		if (*s == c)
		{
			a = s;
			break;
		}
		s++;
	}
	return (a);
}
