#include <stdio.h>
/**
 * main - Program entry
 *Description: Prints all the alphabet letters in lowercase except q and e
 *Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);	
		}
		c++;
	}

	putchar('\n');
	return (0);
}

