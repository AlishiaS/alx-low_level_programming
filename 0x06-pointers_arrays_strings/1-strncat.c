#include "main.h"
int _strlen(char *s);
/**
 * _strncat - concatenates two strings
 * @n: number of bytes
 * @dest: Pointer to destination string
 * @src: Pointer to source string
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *ptr = dest + strlen(dest);

	while (*src != '\0' && n--)
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';

	return (dest);
}
