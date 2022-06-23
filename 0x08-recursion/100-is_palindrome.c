#include "main.h"
int palindrome(char *s, int i, int len);
int _strlen_recursion(char *s);
/**
 * is_palindrome - confirms if a string is palindrome.
 * @s: the given string.
 *
 * Return: 1 if a string is a palindrome, and 0 if not.
 */
/*
 * i made use of the _strlen_recursion function from the previously done task.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);

	return (palindrome(s, 0, _strlen_recursion(s)));
}

/**
 * palindrome - checks if a string is a palindrome.
 * @s: address to the given string.
 * @i: string index
 * @len: length of the string.
 *
 * Return: 1 if the string is a palindrome and 0 if not.
 */
int palindrome(char *s, int i, int len)
{
	if (*(s + i) != *(s + len - 1))
	{
		return (0);
	}
	if (i >= len)
	{
		return (1);
	}

	return (palindrome(s, i + 1, len - 1));
}

/**
 * _strlen_recursion - determines the lenth of a string.
 * @s: the given string
 *
 * Return: Length of the string.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + _strlen_recursion(s + 1));
}
