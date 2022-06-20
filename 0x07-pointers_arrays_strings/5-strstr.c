#include "main.h"
/**
 * _strstr - searches a given string for a given substring.
 * @haystack: the address of the given string.
 * @needle: the address of the substring.
 *
 * Return: address to the first occurence from the substring.
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j, c;
	char *a = NULL;

	for (j = 0; ; j++)
	{
		if (*(needle + j) == '\0')
			break;
	}

	while (*haystack != '\0')
	{
		c = 0;
		for (i = 0; ; i++)
		{

			if (*(needle + i) == '\0' || *(haystack + i) == '\0')
			{
				break;
			}
			if (*(haystack + i) == *(needle + i))
			{
				c++;
			}
			else
			{
				break;
			}
		}
		if (j == c)
		{
			a = haystack;
			break;
		}

		haystack++;
	}

	return (a);
}
