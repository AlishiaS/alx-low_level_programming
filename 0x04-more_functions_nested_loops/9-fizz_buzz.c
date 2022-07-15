#include <stdio.h>
/**
 * main - main
 * Description - prints the numbers from 1 to 100, prints fizz with multiples of 3,
 * Prints Buzz with multiples of 5 and FizzBuzz with multiples of both 3 and 5.
 * Return: void
 */
int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if (i % 5 ==0)
			printf("Buzz ");
		else
			printf ("%d ", i);
	}
	printf("Buzz\n");
	return (0);
}
