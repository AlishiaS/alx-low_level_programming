#include "main.h"
/**
 * *_strncpy - Function Prototype
 * Description - copies a string
 * @n: int
 * @dest : Destination string
 * @src : Source string
 * Return : dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;

for (i = 0 ; i < n && src[i] != '\0' ; i++)
	dest[i] = src[i];

for ( ; i < n; i++)
{
	dest[i] = '\0';
}
return (dest);
}