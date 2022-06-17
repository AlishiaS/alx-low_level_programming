#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest: Pointer to Destination string
 * @src: Pointer to Source string
 * Return: The pointer to destination string
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	int a;

	for (a = 0; dest[a]; a++)
	{
	}

	for (i = 0; i < n && dest[i]; i++)
	{
		dest[i + a] = src[i];
	}

	dest[i + a] = '\0';

	return (dest);
}
