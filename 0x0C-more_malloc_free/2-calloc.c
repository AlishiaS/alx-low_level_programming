#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *_calloc - allocates memory for an array using malloc
 * @nmemb:  unsigned int
 * @size: unsigned int
 * Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	char *a;
	unsigned int s;

	if (nmemb == 0 || size == 0)
		m = malloc(size * nmemb);

	if (m == NULL)
		return (NULL);

	a = m;

	for (s = 0; s < (size * nmemb); s++)
		a[s] = '\0';

	return (m);
}
