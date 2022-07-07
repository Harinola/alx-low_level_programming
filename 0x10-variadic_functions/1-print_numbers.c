#include "variadic_functions.h"
/**
 * print_numbers - A function that prints numbers folowed by a new line.
 * @separator: Separator for the printed numbers.
 * @n: Amount of numbers to be printed.
 *
 * Return: Nothing.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list nums;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i > 0)
			printf("%s", separator);
		printf("%d", va_arg(nums, int));
	}
	va_end(nums);
	printf("\n");
}
