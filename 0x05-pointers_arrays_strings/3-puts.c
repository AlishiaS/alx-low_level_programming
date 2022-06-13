#include "main.h"
/**
 * _puts - prints a string
 * @str: string to print
 * Return: void
 */
void _puts(char *str)
{
	int i = 0;

	while (s[i] != '\n' && s[i] != '\0')
	{
		putchar(s[i]);
		i++;
	}
}
