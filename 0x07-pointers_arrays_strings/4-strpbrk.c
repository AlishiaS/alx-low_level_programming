#include "main.h"
#include <stdio.h>
/**
 * *_strpbrk - Function Prototype
 * Description - searches a string for any of a set of bytes.
 * @s : string to be checked
 * @accept : set of bytes to be searched
 * Return : pointer to the byte that matches
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}
		s++;
	}
	return ('\0');
}
