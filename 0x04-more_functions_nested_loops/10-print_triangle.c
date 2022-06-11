#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');

	else
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
}
