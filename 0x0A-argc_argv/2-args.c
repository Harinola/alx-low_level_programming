#include <stdio.h>
/**
 * main - prints the argument(s) passed into the program.
 * @argc: amount of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
