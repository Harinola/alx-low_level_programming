#include <stdio.h>
#include "main.h"
int _toint(char *s);
/**
 * main - prints the result of the multiplication of two numbers.
 * @argc: amount of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: 0 if multiplication is successful, and 1 if not.
 */
int main(int argc, char *argv[])
{
	int i, mul = 1;

	if (argc == 3)
	{
		for (i = 1; i < argc; i++)
		{
			mul *= _toint(argv[i]);
		}

		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

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
