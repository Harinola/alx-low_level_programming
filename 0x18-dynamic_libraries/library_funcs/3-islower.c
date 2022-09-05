#include "main.h"

/**
 * _islower - checks if the inputed character is lowercase.
 *@c: the character to check.
 *
 * Return: 1 if true and 0 if false.
 */
int _islower(int c)
{
	int val;

	if (c >= 97 && c < 123)
		val = 1;
	else
		val = 0;

	return (val);
}
