#include "variadic_functions.h"
/**
 * sum_them_all - A function that computes the sum of all it's parameters.
 * @n: Number of the parameters.
 *
 * Return: Sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum = 0;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
		sum += va_arg(nums, int);

	va_end(nums);
	return (sum);
}
