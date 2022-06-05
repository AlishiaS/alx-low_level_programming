#include <stdio.h>
/**
 * main - Program entry
 * Description: Prints all possible different combinations of two digits
 * Return: 0
 */
int main(void)
{
	int b;
	int c;

	for (b = 0;  b < 9; b++)
	{
		for (c = b + 1; c < 10; c++)
		{
			putchar((b % 10) + '0');
			putchar((c % 10) + '0');

			if (b == 8 && c == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
