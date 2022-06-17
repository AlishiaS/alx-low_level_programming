#include "main.h"
int _strlen(char *s);
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest: Pointer to Destination string
 * @src: Pointer to Source string
 * Return: The pointer to destination string
 */
char *_strncat(char *dest, char *src, int n);
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';

	return (dest);
}
