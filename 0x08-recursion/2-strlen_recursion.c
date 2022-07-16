#include "main.h"
/**
 * _strlen_recursion - returns length of a string.
 * @s: string to be measured
 * Return: length of the string.
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s[i] + 1));
}