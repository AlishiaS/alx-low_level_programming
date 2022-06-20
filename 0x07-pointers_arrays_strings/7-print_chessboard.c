#include "main.h"
#include <stdio.h>
/**
 * print_chessboard - Function Prototype
 * Description -  prints the chessboard
 * @a: array to be checked
 * Return: Always 0
 */
void print_chessboard(char (*a)[8])
{
	int a, b, c;

	c = 0;

	while (a[c][c])
		c++;

	c -= 1;

	for (a = 0; a < c; a++)
	{

		for (b = 0; b < c; b++)
			_putchar(a[a][b]);
		_putchar('\n');
	}
}
