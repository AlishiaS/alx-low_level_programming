#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Program entry
 * Description: Prints the lowercase alphabet in reverse
 * Return: 0
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c++;
	}

	putchar('\n'); 
	return (0);
}
