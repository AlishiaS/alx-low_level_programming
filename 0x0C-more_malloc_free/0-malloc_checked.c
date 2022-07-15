#include "main.h"
#include<stdlib.h>
/**
 * *malloc_checked - allocates memory using malloc.
 * @b: unsigned int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	int *str;

	str = malloc(b);

	if (str == NULL)
		return (98);

	return (str);
}
