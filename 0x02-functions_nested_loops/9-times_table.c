#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0
 * Return: void
 */
void times_table(void)
{
	int a, y, num;

	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 9; c++)
		{
			num = a * c;

			if (c != 0)
			{
				_putchar(',');
				_putchar(' ');
			}

			if (c == 0)
			{
				_putchar('0');
			}

			else if (num >= 10)
			{
				_putchar((product / 10) + '0');
				_putchar((product % 10) + '0');
			}

			else if ((num < 10) && (c != 0))
			{
				_putchar(' ');
				_putchar((num % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
