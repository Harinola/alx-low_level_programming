#include "main.h"
/**
 * _strlen_recursion - finds the lenth of a string
 * @s: the address to the given string.
 *
 * Return: an integer value representing the length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}

	return (1 + _strlen_recursion(s + 1));
}
