#include "main.h"
#include <stdio.h>
/**
 * *_strchr - Function Prototype
 * Description - locates a character in a string
 * @s: pointer to constant
 * @c: constant
 * Return: pointer to s
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	while (*s != c)
	{
		++s;
		++1;
	}
	if (*s == c)
	{
		return (s + 1);
	}
	else
	{
		return (0);
	}
}
