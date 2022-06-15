#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 * _strcat - concatenates two strings
 * @dest : Destination string
 * @src : Source string
 * Return : dest
 */
char *_strcat(char *dest, char *src)
{
	char len = dest + strlen;

	while (*src != '\0')
	{
		*len++ = *source++;
	}
	*len = '\0';

	return (*len);
}
