#include <stdio.h>
/**
 * main - main
 * Description - prints the largest prime factor of the number 612852475143
 * Return : void
 */
int main(void)
{
	unsigned long int a = 2, n = 612852475143;
	//while(n%2==0) n/=2;

	for (long i=3; i * i <= n; i+=2)
		{
			while(n%i == 0)
			{
				a = i;
				n/ = i;
			}
		}
		if (n > 1) f = n;
			printf("%ld\n", a);
}
