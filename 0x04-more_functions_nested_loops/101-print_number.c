#include "main.h"
/**
 * print_number - prints a number
 * @n: number to be printed
 *
 * Return: void.
 */
void print_number(int n)
{
	int num;

	if (n < 0)
		num = -n;
	else
		num = n;

	if (num / 10)
		print_number(num / 10);
	
	_putchar((num % 10) + '0');

}
