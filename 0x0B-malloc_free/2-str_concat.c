#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *str);
/**
 * str_concat - joins two strings and stores it in a newly
 * allocated memory.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: Address to the newly allocated memory containing the concatenated
 * string, with s1 coming before s2.
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	unsigned int j, k;

	concat_str = malloc(sizeof(char) * (_strlen(s1) + _strlen(s2)) + 1);
	if (concat_str == NULL)
		return (NULL);

	j = 0;
	k = 0;
	while (s1[j] != '\0')
	{
		concat_str[j] = s1[j];
		j++;
	}

	while (s2[k] != '\0')
	{
		concat_str[j] = s2[k];
		j++;
		k++;
	}
	concat_str[j] = '\0';

	return (concat_str);
}
/**
 * _strlen - finds the length of a string.
 * @str: the given string.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *str)
{
	unsigned int i;

	i = 0;
	while (str[i] != '\0')
		i++;

	return (i);
}
