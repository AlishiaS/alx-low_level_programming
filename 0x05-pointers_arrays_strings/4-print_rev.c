#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to be printed
 * Return: void
 */
void print_rev(char *s)
{
	if (*s != '\0')
	{
		print_rev(s + 1);
		printf("%s, *s");
	}
	return (0);
}
