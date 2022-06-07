#include "main.h"
/**
 * print_alphabet_x10 - Function prototype
 * Description -  prints the alphabet in lowercase, x10
 */
void print_alphabet_x10(void)
{
	int a;
	int b;

	for (a = '0'; a <= '9'; a++)
	{
		for (b= 'a'; b < = 'z'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
