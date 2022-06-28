#include "main.h"
#include <stdlib.h>

unsigned int _strlen(char *str);
/**
 * _strdup - duplicates a string and stores it in a newly
 * allocated memory.
 * @str: given string.
 *
 * Return: Address to the newly allocated memory containing the string(Success)
 * NULL(Failure).
 */
char *_strdup(char *str)
{
	char *dup_str;
	unsigned int j;

	if (str == NULL)
		return (NULL);

	dup_str = malloc(sizeof(char) * _strlen(str) + 1);
	if (dup_str == NULL)
		return (NULL);

	j = 0;
	while (str[j] != '\0')
	{
		dup_str[j] = str[j];
		j++;
	}
	dup_str[j] = '\0';

	return (dup_str);
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
