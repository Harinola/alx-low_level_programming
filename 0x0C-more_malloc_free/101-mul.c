#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strlen - Gets the length of a string.
 * @s: Given string.
 *
 * Return: Length of the string.
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	return (i);
}
/**
 * is_digit - checks if a string is made of only digits.
 * @s: Given string.
 *
 * Return: 1 if true, 0 if false.
 */
int is_digit(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	return (1);
}
/**
 * _error - Prints the error message and exits the program with a status of 98.
 *
 * Return: Nothing.
 */
void _error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * main - Takes two int argument and returns their multiplication.
 * @argc: Argument count.
 * @argv: Argument vector(Array).
 *
 * Return: 0(Success), 1(Failure).
 */
int main(int argc, char **argv)
{
	char *s1, *s2;
	int *ans, len1, len2, lent, dgt1, dgt2, rem, i, j, check = 0;

	s1 = argv[1];
	s2 = argv[2];
	if (argc != 3 || !(is_digit(s1)) || !(is_digit(s2)))
		_error();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	lent = len1 + len2;
	ans = malloc(sizeof(*ans) * lent);
	if (!ans)
		return (1);
	for (i = 0; i < lent; i++)
		ans[i] = 0;
	for (i = len1 - 1; i >= 0; i--)
	{
		rem = 0;
		dgt1 = s1[i] - '0';
		for (j = len2 - 1; j >= 0; j--)
		{
			dgt2 = s2[j] - '0';
			rem += dgt1 * dgt2 + ans[i + j + 1];
			ans[j + i + 1] = rem % 10;
			rem /= 10;
		}
		if (rem)
			ans[i + j + 1] += rem;
	}
	for (i = 0; i < lent; i++)
	{
		if (ans[i])
			check = 1;
		if (check)
			_putchar(ans[i] + '0');
	}
	if (!check)
		_putchar('0');
	_putchar('\n');
	return (0);
}
