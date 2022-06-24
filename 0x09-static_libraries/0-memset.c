#include "main.h"
#include <stdio.h>
/**
 * *_memset - Function Prototype
 * Description - fills the first n bytes of the memory area pointed to by s,
 * with the constant byte b.
 * @s: pointer to put constant byte
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		s[i] = b;
	}
	return (s);
}
