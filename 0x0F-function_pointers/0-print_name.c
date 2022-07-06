#include "function_pointers.h"
/**
 * print_name - A function that prints a name.
 * @name: The given name.
 * @f: function pointer to a function that takes a string
 * as argument and return nothing(void).
 *
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
