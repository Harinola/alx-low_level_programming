#include <stdio.h>
/**
 * main - prints the number of actual argument(s) passed - 1.
 * @argc: amount of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
