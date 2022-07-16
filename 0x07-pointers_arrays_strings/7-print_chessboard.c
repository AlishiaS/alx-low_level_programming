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
	int i, a;

	for (i = 0; i < 8; i++)
	{
		for (a = 0; a < 8; a++)
		{
			_putchar(a[i][a]);
		}
		_putchar('\n');
	}
}
