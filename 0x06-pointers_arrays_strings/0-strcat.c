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
	 int i, j;

	 i = 0;
	 while (dest[i] != '\0')
	 {
		 i++;
	 }
	 j = 0;
	 while (src[j] != '\0')
	 {
		 *dest[i] = *src[j];
		 i++;
		 j++;
	 }
	 dest[i] != '\0';

	 return (dest);
}
