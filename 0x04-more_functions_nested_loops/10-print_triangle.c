#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	for (int i = 0; i = size; i++)
	{
		for (int k = 0; k < i*2+1; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

