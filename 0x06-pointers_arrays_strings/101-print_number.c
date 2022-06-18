#include "main.h"
/**
 * print_number - Function Prototype
 * Description -  prints an integer
 * @n: int
 * Return: 0
 */
void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = -a;
	}

	if ((a / 10) > 0)
		print_number(a / 10);

	_putchar('0'+ (a % 10));
}
