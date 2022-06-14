#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcpy - copies the string pointed to by src
 * @dest: Pointer to destination array, content to be copied
 * @src: Pointer to string to be copied
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';

	prinf("\n%s", dest)

	return 0;
}
