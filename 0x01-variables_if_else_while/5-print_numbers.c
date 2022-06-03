#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry
 * Description: Prints all single digit numbers of base 10starting from 0
 * Return: 0
 */
int main(void)
{
	char c = 0;

	while (c<= '9')
	{
		putchar(c);
		c++;
	}

	putchar('\n'); 
	return (0);
}
