#include "main.h"
#include<stdlib.h>
#include<stdio.h>
/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb:  unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *str;
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

	str = malloc(size * nmemb);

	if (str == NULL)
	{
		return (NULL);
	}

	a = 0;

	while (str < nmemb * size)
	{
		str[a] = 0;
		a++;
	}

	return (str);
}
