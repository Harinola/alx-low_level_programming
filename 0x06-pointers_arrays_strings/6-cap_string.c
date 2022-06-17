#include "main.h"
/**
 *cap_string - capitalize the first letter of every word.
 * @s: the given string.
 *
 * Return: pointer to the string.
 */
char *cap_string(char *s)
{
char *a = s;

if (*s > 96 && *s < 123)
{
	*s -= 32;
	s++;
}

while (*s != '\0')
{
if (*s == '\t' || (*s >= 32 && *s <= 34) || *s == '\n' || *s == ','
	|| *s == ';' || *s == '.' || *s == '?' || *s == '('
	|| *s == ')' || *s == '{' || *s == '}')
{
	if (*(s + 1) > 96 && *(s + 1) < 123)
	{
		*(s + 1) -= 32;
	}
}
	s++;
}

return (a);
}
