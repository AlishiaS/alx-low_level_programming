#include "main.h"
/**
 * Prototype: print_alphabet 
 * Description -  prints the alphabet, in lowercase, followed by a new line
 * Return : Always 0 (Success)
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	_putchar('\n');
	return (0);
}
