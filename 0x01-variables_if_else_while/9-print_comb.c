#include <stdio.h>
#include <stdlib.h>
/**
 * main - Program entry
 * Description: Prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int b;

	for (b = 97; b <= 102; b++)
	{
		putchar(b);
		if (b < 57)
		{
			putchar(',');
			putchar(' ');
		}
		b++;
	}
	putchar('\n');
	return (0);
}
