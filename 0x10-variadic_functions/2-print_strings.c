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
	char *s;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);

		if (separator && i > 0)
			printf("%s", separator);

		if (!s)
			printf("(nil)");
		else
			printf("%s", s);
	}

	va_end(strings);
	printf("\n");
}
