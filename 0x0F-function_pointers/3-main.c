#include "3-calc.h"
/**
 * main - Performs arithmetical operations on two integers.
 * @argc: Number of arguments.
 * @argv: array of arguments.
 *
 * Return: Always 0(Success).
 */
int main(int argc, char **argv)
{
	int (*func)(int, int);
	int result, num1, num2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	func = get_op_func(argv[2]);
	if (!func)
	{
		printf("Error\n");
		exit(99);
	}

	result = func(num1, num2);
	printf("%d\n", result);
	return (0);
}
