#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	for (int i = 1; i <= size; i++)
	{
		for (int a = 0; a < i; a++)
		{
			_putchar('# ');
		}
		_putchar('\n');
	}
}
