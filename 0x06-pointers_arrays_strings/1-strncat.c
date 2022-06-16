#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest : Destination string
 * @src : Source string
 * Return : dest
 */
char *_strncat(char *dest, char *src, int n);
{
	int i;
	for (i = 0 ; i < n && src[i] != '\0' ; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
