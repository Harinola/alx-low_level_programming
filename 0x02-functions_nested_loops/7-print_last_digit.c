#include "main.h"

/**
 * print_last_digit - A function that computes the last digit of a integer.
 * @n: The considered integer.
 *
 * Return: The last digit of the given integer.
 */
int print_last_digit(int n)
{
	int lst;

	if (n > 0)
		lst = n % 10;
	else
		lst = -1 * (n % 10);

	_putchar(lst + '0');
	return (lst);
}
