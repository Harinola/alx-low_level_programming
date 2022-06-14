#include "main.h"
/**
 * rev_string - reverse the value of a string.
 * @s: pointer to the input string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, count = 0;

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

	char str[count];
	int k;

	for (k = 0; k < count; k++)
	{
		str[k] = *(s + k);
	}
	for (j = 0; j < count; j++)
	{
		*(s + j) = str[count - 1 - j];
	}
}
