#include "main.h"
/**
 * puts_half - prints half of the input string to the standard output,
 * for odd length string it prints the last n characters, where n is
 * the quotient of length of string divided by 2.
 * @str: pointer to the input string.
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j, count = 0;

	for (i = 0; ; i++)
	{
		if (*(str + i) == '\0')
		{
			break;
		}
		else
		{
			count++;
		}
	}
	if (count % 2 == 1)
	{
		count++;

		for (j = count / 2; j < count - 1; j++)
		{
			char a = *(str + j);

			_putchar(a);
		}
	}
	else
	{
		for (j = count / 2; j < count; j++)
		{
			char a = *(str + j);

			_putchar(a);
		}
	}
	_putchar('\n');
}
