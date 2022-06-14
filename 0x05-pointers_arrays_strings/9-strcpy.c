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
	int i;

	for(i=0; src[i] != ‘\0’; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	printf("\n The copied string is : %s", dest);

	return 0;
}
