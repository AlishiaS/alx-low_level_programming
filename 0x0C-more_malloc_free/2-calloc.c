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
	void *a;
	char *b;
	unsigned int s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	a = malloc(size * nmemb);

	if (a == NULL)
		return (NULL);

	b = a;

	for (s = 0; s < (size * nmemb); s++)
		b[s] = '\0';

	return (a);
}
