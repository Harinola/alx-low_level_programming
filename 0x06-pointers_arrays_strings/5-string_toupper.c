#include "main.h"
/**
 *string _toupper - changes all lower case characters to upper case.
 * @s1: the iven string.
 *
 * Return: pointer to the string.
 */
int string_toupper(char *s1)
{
	char *a = s1;

	while (*s1 != '\0')
	{
		if (*s1 > 96 && *s1 < 123)
		{
			*s1 -= 32;
		}
		s1++;
	}

	return (a);
}
