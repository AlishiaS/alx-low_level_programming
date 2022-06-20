#include "main.h"
#include <stdio.h>
/**
 * _strspn - Function Prototype
 * Description - gets the length of a prefix substring.
 * @s: string to be checked
 * @accept: set of bytes to be searched
 * Return: Number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int k = 0;
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				k++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (k);
		}
		s++;
	}
	return (k);
}
