#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  *_strcat - Function Prototype
 *  Description - concatenates two strings
 *  @dest: Pointer to the destination string
 *  @src : Pointer to the source string
 *  Return : Pointer to the destination string
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}
