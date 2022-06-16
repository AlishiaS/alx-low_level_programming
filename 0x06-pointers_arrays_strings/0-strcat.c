#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  *_strcat - Function Prototype
 *  Description - concatenates two strings
 *  @dest : Destination string
 *  @src : Source string
 *  Return : void
 */
char *_strcat(char *dest, char *src)
{
	int i, j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;

	do {
		j++;
		dest[i] = src[j];
		i++;
	} while (src[j] != '\0');

	return (dest);
}
