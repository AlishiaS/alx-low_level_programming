#include <stdio.h>
/**
 * main - Program entry point
 * Description: Prints all possible combinations of two-digit numbers
 * Return: 0
 */
int main(void)
{
	int b;
	int c;
	int max = 100;

	for (b = 0; b < max ; b++)
	{
		for (c = b + 1 ; c < max; c++)
		{
			putchar (b / 10 + '0');
			putchar (b % 10 + '0');
			putchar (' ');

			putchar (c / 10 + '0');
			putchar (c % 10 + '0');

			if (b == 98 && c == 99)
				break;

			putchar(',');
			putchar (' ');
		}
	}
	putchar('\n');
	return (0);
}
