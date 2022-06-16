#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest : Destination string
 * @src : Source string
 * Return: pointer to destination string
 */
char *_strncat(char *dest, char *src, int n);
{
	int a, i

	for (a = 0 ; a < n && src[i] != '\0' ; i++)
		dest[a] = src[i];

	for (i = 0; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
