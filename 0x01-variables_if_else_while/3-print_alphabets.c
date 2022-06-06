#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int c;

	for (c = 0; c < 52; c++)
	{
		putchar(alpha[c]);
	}
	putchar('\n');
	return (0);
}
