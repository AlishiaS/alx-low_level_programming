#include <stdio.h>
/**
 * main - main
 * Description - prints the numbers from 1 to 100
 * Return: void
 */
int main(void)
{
	int a = 1;

	while (a <= 100)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%a", a);
		}

		if (a != 100)
		{
			putchar(' ');
		}
		a++;
	}
	putchar('\n');
	return (0);
}
