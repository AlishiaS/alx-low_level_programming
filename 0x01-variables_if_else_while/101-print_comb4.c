#include <stdio.h>
/**
 * main - Program entry
 * Description: Prints all possible different combinations of tw0 digits
 * Return: 0
 */
int main(void)
{
	int i = 0;
	int b;
	int c;

	while (i < 10)
	{
		b = 0;
		while (b < 10)
		{
			c = 0;
			while (c < 10)
			{
				if (c != b && b != i && i < b && b < c)
				{
					putchar('0' + i);
					putchar('0' + b);
					putchar('0' + c);

					if (c + b + i != 9 + 8 + 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
				c++;
			}
			b++;
		}
		i++;
	}
	putchar('\n');
	return (0);
}
