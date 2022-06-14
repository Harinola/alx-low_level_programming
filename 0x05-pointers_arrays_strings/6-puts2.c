#include "main.h"
/**
 * puts2 - prints every other characters of a string to the standard output,
 * starting with the first character and skipping the next one.
 * @str: pointer to the input string.
 *
 * Return: void.
 */
void puts2(char *str)
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
	for (j = 0; j < count; j += 2)
	{
		char a = *(str + j);

		_putchar(a);
	}
	_putchar('\n');
}
