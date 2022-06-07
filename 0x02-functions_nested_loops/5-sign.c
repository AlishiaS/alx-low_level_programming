 #include "main.h"
/**
 * print_sign - Function prototype
 * Description: prints the sign of a number
 * @n: number being tested
 * Return: 1 if positive, 0 if is 0, -1 if negative
 */
int print_sign(int n)
{
	int a;
	char b;

	if (n <= 0)
	{
		if (n == 0)
		{
			a = 0;
			b = '0';
		}
		else
		{
			a = -1;
			b = '-';
		}
	}
	else
	{
		a = 1;
		b = '+';
	}
	_putchar(b);
	return (a);
}
