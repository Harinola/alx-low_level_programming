#include "main.h"
#include <stdlib.h>
/**
 * _strlen - Checks the length of a string.
 * @s: The given string.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int cnt;

	cnt = 0;

	if (s == NULL)
		return (cnt);
	while (s[cnt])
		cnt++;

	return (cnt);
}
/**
 * string_nconcat - Concatenates n bytes of s2 unto s1 in a new memory.
 * @s1: First string.
 * @s2: Second string.
 *
 * Return: Address of the new memory(Success), NULL(Failure).
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int len, i, j;

	len = n;
	i = 0;
	j = 0;

	if (len > _strlen(s2))
		len = _strlen(s2);

	s = malloc(sizeof(*s) * (_strlen(s1) + len + 1));
	if (s == NULL)
		return (NULL);

	while (i < _strlen(s1))
		s[i++] = s1[i];

	while (j < len)
		s[i++] = s2[j++];

	s[i] = '\0';

	return (s);
}
