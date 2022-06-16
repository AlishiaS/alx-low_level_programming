#include "main.h"
#include <stdio.h>
#include <string.h>
/**
 *  _strcat - Function Prototype
 *  Description - concatenates two strings
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

	 while(src[j] != '\0')
	 {
		 *dest[i] = *src[j];
		 dest++;
		 src++;
		 j++;
	 }

	return (dest);
}
