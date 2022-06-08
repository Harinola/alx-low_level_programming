#include "main.h"

/**
 * print_alphabet_x10 - A function that out puts the alphabets
 *
 * Return: Always void(No return value)
 */
void print_alphabet_x10(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyz";
	int i;
	int count = 10;

	while (count > 0)
	{
	for (i = 0; i < 26; i++)
	{
		_putchar(alpha[i]);
	}
	_putchar('\n');
	count--;
	}
}
