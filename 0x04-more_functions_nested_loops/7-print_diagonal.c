#include "main.h"
/**
 * print_diagonal - draws a diagonal line
 * @n : number of \\ to be printed
 * Return:void
 */
void print_diagonal(int n)
{
	int a = 0, ii;

	while (a < n && n > 0)
	{
		ii = 0;
		while (ii < a)
		{
			_putchar(' ');
			ii++;
		}
		_putchar('\\');
		_putchar('\n');
		a++;
	}
	if (a == 0)
		_putchar('\n');
}
