#include <stdio.h>
/**
 * main - main
 * Description - prints the numbers from 1 to 100
 * Return: void
 */
int main(void)
{
	int i = 1;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%a", i);
		}

		if (i != 100)
		{
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
