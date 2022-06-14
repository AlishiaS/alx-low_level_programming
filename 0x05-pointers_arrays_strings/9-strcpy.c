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
	for (int i = 0; *(src + 1) != '\0'; i++)
	{
		dest[i] = *(src + 1);

		dest[i] = '\0';

	return (dest);
}