#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i = 0, j, k = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
	else
	{
		for (; i < size; i++)
		{
			for (j = 0; size; j++)
			
				_putchar(j < k ? ' ' : '#');

			k--;
			_putchar('\n');
		}
	}
}
