#include <stdio.h>
/**
 * _isdigit - checks if a character is a digit.
 * @c: character value to be checked
 *
 * Return: 1 for digit and 0 for others.
 */
int _isdigit(int c)
{
	int res;

	if (c >= 48 && c <= 57)
		res = 1;
	else
		res = 0;

	return (res);
}
