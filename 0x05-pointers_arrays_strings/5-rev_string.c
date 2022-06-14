#include "main.h"
/**
 * rev_string - reverse the value of a string.
 * @s: pointer to the input string.
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, k, count = 0;
	char str[];

	for (i = 0; ; i++)
	{
		if (*(s + i) == '\0')
		{
			break;
		}
		else
		{
			str[i] = *(s + i);
			count++;
		}
	}
	for (j = 0; j < count; j++)
	{
		*(s + j) = str[count - 1 - j];
	}
}
