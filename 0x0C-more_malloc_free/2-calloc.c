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
<<<<<<< HEAD
<<<<<<< HEAD
	char *s;
=======
	char *str;
>>>>>>> parent of 553dbaa (_calloc)
=======
	char *s;
>>>>>>> parent of 8e457f2 (_calloc)
	unsigned int a;

	if (nmemb == 0 || size == 0)
		return (NULL);

<<<<<<< HEAD
<<<<<<< HEAD
	s = malloc(size * nmemb);

	if (s == NULL)
=======
	str = malloc(size * nmemb);

	if (str == NULL)
	{
>>>>>>> parent of 553dbaa (_calloc)
=======
	s = malloc(size * nmemb);

	if (s == NULL)
>>>>>>> parent of 8e457f2 (_calloc)
		return (NULL);

	a = 0;

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
	while (str < (nmemb * size))
=======
	while (s < (nmemb * size))
>>>>>>> parent of 8e457f2 (_calloc)
=======
	while (s < (nmemb * size))
>>>>>>> parent of 8e457f2 (_calloc)
	{
		s[a] = 0;
		a++;
	}

	return (s);
=======
	while (str < (nmemb * size))
=======
	while (s < (nmemb * size))
>>>>>>> parent of 8e457f2 (_calloc)
	{
		s[a] = 0;
		a++;
	}

<<<<<<< HEAD
	return (str);
>>>>>>> parent of 553dbaa (_calloc)
=======
	return (s);
>>>>>>> parent of 8e457f2 (_calloc)
}
