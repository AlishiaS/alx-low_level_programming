#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, k;

	for (i = 1; i = size; i++)
	{
		for (k = 1; k <= i; k++)
		{
			_putchar('# ');
		}
		_putchar('\n');
	}
	return 0;
}

