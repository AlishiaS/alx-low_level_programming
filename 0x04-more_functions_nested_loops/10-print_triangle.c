#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, k = 0;

	if (size <= 0)
	{
		_putchar('\n')
	else
	{
		while(k < size)
		{
			for(i = 0;i <=k; i++)
			{
				_putchar('#');
			}
			_putchar('\n');
			k++;
		}
	}
}
