#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  _strcat - concatenates two strings
 *  @dest : Destination string
 *  @src : Source string
 *  Return : void
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		++dest;
		i++;
	}

	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;

		return (dest);
	}
	return (0);
}
