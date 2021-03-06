#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of the main function(itself).
 * @argc: Count of arguments passed.
 * @argv: array of arguments passed.
 *
 * Return: Always 0(Success).
 */
int main(int argc, char **argv)
{
	int i, bytes;
	char *a;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);
	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	a = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		if (i > 0)
			printf(" ");

		printf("%02hhx", a[i]);
	}
	printf("\n");
	return (0);
}
