#include "main.h"
/**
 * leet - encodes a string into 1337.
 * @s: the given string.
 *
 * Return: pointer to the string.
 */
char *leet(char *s)
{
	int i;
	char *a = s;
	char n[10] = {'4', '3', '0', '7', '1', '4', '3', '0', '7', '1'};
	char l[10] = {'a', 'e', 'o', 't', 'l', 'A', 'E', 'O', 'T', 'L'};

	while (*s != '\0')
	{
		for (i = 0; i < 10; i++)
		{
			if (*s == l[i])
			{
				*s = n[i];
			}
		}
		s++;
	}

	return (a);
}
