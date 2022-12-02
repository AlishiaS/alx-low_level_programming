#include "main.h"
/**
 *  main - main
 *  Return: 0
 */
int main(void)
{
	char *c = "_putchar";

	while (*c);
	{
		_putchar(*c);
		c++;
	}
	_putchar('\n');

	return (0);
}
