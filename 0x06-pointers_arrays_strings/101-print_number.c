#include "main.h"
/**
 * print_number - Function Prototype
 * Description -  prints an integer
 * @n: int
 * Return: 0
 */
void print_number(int n)
{
	int a = n;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (num > 9) print_number(n / 10)
		_putchar('0'+ (a % 10));
}
