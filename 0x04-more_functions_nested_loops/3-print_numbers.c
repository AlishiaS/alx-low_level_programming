#include "main.h"
/**
 * print_numbers - prints the numbers, from 0 to 9
 * Return:0
 */
void print_numbers(void)
{
	int a = 0;

	while (a <= 9)
	{
		_putchar('0' + a);
		a++;
	}
	_putchar('\n');
}
