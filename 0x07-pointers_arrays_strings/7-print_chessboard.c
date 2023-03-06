#include "main.h"

/**
 * print_chessboard - Entry Point
 * @a: array
 * Return: Always 0 (Success)
 */

void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; j < 8; i++)
	{
		for (j = 0; j < 8; j++)
			-putchar(a[i][j]);
		_putchar('\n');
	}
}
