#include "main.h"

/**
 * print_chessboard - print chessboard
 * @a: pointer to the pieces to print
 *
 * Return: (void) on success
 */
void print_chessboard(char (*a)[8])
{
	int t, v;

	for (t = 0; t < 8; t++)
	{
		for (v = 0; v < 8; v++)
		{
			_putchar(a[t][v]);
		}
		_putchar('\n');
	}
}
