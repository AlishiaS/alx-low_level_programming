#include "main.h"
/**
 * *_strncpy - Function Prototype
 * Description - copies a string
 * @n: int
 * @dest: Pointer to destination string
 * @src :Pointer to source string
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
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
