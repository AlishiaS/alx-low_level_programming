 #include "main.h"
/**
 * print_sign - Function prototype
 * Description: prints the sign of a number
 * @n: number being tested
 * Return: 1 if positive, 0 if is 0, -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
