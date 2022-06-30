#include "main.h"
#include <stdio.h>
#include <stdlib.h>
unsigned int _strlen(char *s);
/**
 * string_nconcat - Concatenates n bytes of s2 unto s1.
 * @s1: First string.
 * @s2: Second string.
 * @n: Number of bytes.
 *
 * Return: pointer to the gotten string(Success), NULL(Failure).
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

	s = malloc(sizeof(char) * (_strlen(s1) + len + 1));
	if (s = NULL)
		return (NULL);

	while (s1[i] !='\0')
	{
		s[i++] = s1[i++];
	}

	while (j < len)
	{
		s[i++] = s2[j++];
	}

	s[i] = '\0';
	printf("%u\n", len);

	return (s);
}

/**
 * _strlen - Checks the length of a string.
 * @s: the given string.
 *
 * Return: Length of the string.
 */
unsigned int _strlen(char *s)
{
	unsigned int cnt;

	cnt = 0;
	while (s[cnt])
		cnt++;

	return (cnt);
}
