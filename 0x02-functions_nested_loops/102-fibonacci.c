#include <stdio.h>
/**
 * main - main
 * Description - prints the first 50 Fibonacci numbers, starting with 1 and 2
 *  Return:0
 */
int main(void)
{
	int i;
	long int a = 1;
	long int s = 2;
	long int c;
	long int max = 20365011074;

	for (i = 0; i < 50; i++)
	{
		if (a != max)
			printf("%ld, ", a);

		else 
			printf("%ld\n", a);

		c = a + s;
		a = s;
		s = a;
	}
		return (0);
}
