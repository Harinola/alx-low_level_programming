#include "main.h"
#include <stdio.h>
/**
 * _atoi - converts a string to an integer
 * @s: sting to be converted
 *
 * Return: integer in the string, if none, returns 0;
 */
int _atoi(char *s)
{
	int i, j, sign = 0, index = 0, cnt = 0, out = 0, digit = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] > 47 && s[i] < 58)
		{
			cnt++;
			if (cnt == 1)
			{
				index = i;
			}
			if (s[i + 1] < 48 || s[i + 1] > 57)
				break;
		}
	}

	if (cnt == 0)
		return (0);

	for (j = index; j < index + cnt; j++)
	{
		digit = s[j] - '0';


		if (sign % 2)
		{
			digit = -digit;
		}

		out = (out * 10) + digit;
	}

	return (out);
}
