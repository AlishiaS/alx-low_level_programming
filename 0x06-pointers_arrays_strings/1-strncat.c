#include "main.h"
int _strlen(char *s)
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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
