#include <stdio.h>
/**
 * main - main
 * Description - prints the sum of all the multiples of 3 or 5 below 1024
 * Return:0
 */
int main(void)
{
	int a = 0, i;

	for (i = 0; i < 1024; ++i)
	{
		if (i % 3 == 0 || i % 5 == 0)
			a += i;
	}
	printf("%i\n", a);
	return (0);
}
