#include "main.h"
/**
 * print_square - prints a square
 * @n : number of _ to be printed
 * Return:void
 */
void print_square(int n)
{
	int a = 0, ii;

	while (a < n && n > 0)
	{
		ii = 0;
		while (ii < n)
		{
			_putchar('#');
			ii++;
		}
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
