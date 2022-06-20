#include "main.h"
#include <stdio.h>
/**
 * *_memcpy - Function Prototype
 * Description - copies n bytes from memory area src to memory area dest
 * @dest: pointer to memory area
 * @src: memory area
 * @n: number of bytes
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; n > 0; i++, n--)
	{
		dest[i] = src[i];
	}
	return(dest);
}
