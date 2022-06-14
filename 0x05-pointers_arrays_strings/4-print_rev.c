#include "main.h"
/**
 * print_rev - prints the reverse of a string to the standard output (stdout).
 * @s: pointer to the input string.
 *
 * Return: void.
 */
void print_rev(char *s)
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
	for (j = count - 1; j >= 0; j--)
	{
		char b = *(s + j);

		_putchar(b);
	}
	_putchar('\n');
}
