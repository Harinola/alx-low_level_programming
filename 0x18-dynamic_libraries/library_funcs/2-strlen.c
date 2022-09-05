#include "main.h"
/**
 * _strlen - finds the length of a input string.
 * @s: pointer to the input string.
 *
 * Return: the length of the string.
 */
int _strlen(char *s)
{
	int i, count = 0;

	for (i = 0; ; i++)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}

	return (count);
}
