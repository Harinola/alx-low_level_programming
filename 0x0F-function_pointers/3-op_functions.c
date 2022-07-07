#include "3-calc.h"
/**
 * op_add - computes the sum of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: Sum of a and b.
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - computes the difference of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: Difference between a and b.
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - computes the product of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: Product of a and b.
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - computes the division of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: Division of a by b.
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}
/**
 * op_mod - computes the remainder of the division of two integers.
 * @a: first integer.
 * @b: second integer.
 *
 * Return: Remainder of a divided by b.
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}
