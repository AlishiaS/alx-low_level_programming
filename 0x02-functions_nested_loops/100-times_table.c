#include "main.h"
#include <stdio.h>
/**
 * print_times_table - Function prototype
 * Description - prints the n times table, starting with 0
 * @n: The number of times table to print 
 * Return: void
 */
void print_times_table(int n)
{
	int i, a;

	if (n < 0 || n >= 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (a = 0; a <= n; a++)
		{
			num = i * a;
			_putchar("\n%d * %d = %d\t"; i, a);
		}
		_putchar('\n');
	}
}
