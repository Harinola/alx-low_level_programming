#include <stdio.h>
#include "main.h"
int _toint(char *s);
/**
 * main - prints the result of the addition of multiple numbers,
 * prints "Error" if not successful.
 * @argc: amount of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: 0 if addition is successful, and 1 if not.
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		sum += _toint(argv[i]);
	}

	printf("%d\n", sum);

	return (0);
}

/**
 * _toint - converst a string to an integer.
 * @s: the given string.
 *
 * Return: the converted string.
 */
int _toint(char *s)
{
	int i = 0, num = 0, sign = 0, len = 0, dgt, _NAN;

	while (s[len] != '\0')
		len++;

	while (i < len)
	{
		if (s[i] == '-')
			sign++;

		if (s[i] >= '0' && s[i] <= '9')
		{
			dgt = s[i] - '0';
			if (sign == 1)
				dgt = -dgt;

			num = num * 10 + dgt;

			if (s[i + 1] == '\0')
				break;

			if (s[i + 1] < '0' || s[i + 1] > '9')
			{
				_NAN = 1;
				break;
			}
		}
		i++;
	}

	if (_NAN == 1)
		return (0);

	return (num);
}
