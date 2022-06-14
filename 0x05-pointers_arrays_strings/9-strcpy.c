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
	while (*src !='\0')
	{
		*dest = *src;
		src++;
		dest++;
	}

	*dest = '\0';

	return (dest);
}
