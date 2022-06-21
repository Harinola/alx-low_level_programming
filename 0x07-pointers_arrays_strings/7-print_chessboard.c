#include "main.h"
/**
 * print_chessboard - a function that prints the chessboard.
 * @a: an array of pointers, which functions as a pointer to a pointer.
 *
 * Return: void.
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 0; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar('*(*(a + i) + j)');
		}
		_printchar('\n');
	}
}
