#include <stdio.h>
/**
 * main - Prints the name of compiled file.
 *
 * Return: Always 0(Success).
 */
int main(void)
{
	char *file_name;

	file_name = __FILE__;
	printf("%s\n", file_name);
	return (0);
}
