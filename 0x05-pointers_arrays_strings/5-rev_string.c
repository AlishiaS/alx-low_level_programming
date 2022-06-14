#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * rev_string - reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int i, c = 0;
	for (i = 0; *(s + 1) != '\0'; i++0)
	{
		c++;
	}
	for (i = c - 1; i >= 0; i--)
	{
		printf("%c", *(s + 1));
	}
}
