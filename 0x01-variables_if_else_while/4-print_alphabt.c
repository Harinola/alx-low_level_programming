#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdfghijklmnoprstuvwxyz";
	int c;

	for (c = 0; c < 24; c++)
	{
		putchar(alpha[c]);
	}
	putchar('\n');
	return (0);
}
