#include "main.h"
/**
 * _puts - prints a string to the standard output (stdout).
 * @str: pointer to the input string.
 *
 * Return: void.
 */
int _puts(char *str)
{
	int i;

	for (i = 0; ; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		else
		{
			_putchar('*(str + i)');
		}
	}

}
