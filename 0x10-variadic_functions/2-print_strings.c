#include "variadic_functions.h"
/**
 * print_strings - A function that prints strings.
 * @separator: Separator of the strings.
 * @n: number of strings passed to the function.
 *
 * Return: Nothing.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list strings;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		if (separator && i > 0)
			printf("%s", separator);

		if (!va_arg(strings, char *))
			printf("(nil)");
		else
			printf("%s", va_arg(strings, char *));
	}

	va_end(strings);
	printf("\n");
}
