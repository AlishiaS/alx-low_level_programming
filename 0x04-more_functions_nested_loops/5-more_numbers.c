#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 * Return:void
 */
void more_numbers(void)
{
	char n, a;
	int i = 0;

	while (i < 10)
	{
		for (n = 0; n <= 14; n++)
		{
			a = n;
			if (n > 9)
			{
				_putchar('1');
				a = n % 10;
			}
			_putchar('0' + a);
		}
		_putchar('\n');
		i++;
	}
}
