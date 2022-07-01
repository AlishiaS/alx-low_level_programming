#include "main.h"
#include <stdio.h>
#include<stdlib.h>
/**
 * *array_range - cretes array of integers.
 * @min: int
 * @max: int
 * Return: pointer to newly created array.
 */
int *array_range(int min, int max)
{
	int *n, a, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	n = malloc(sizeof(int) * size);

	if (n == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
		n[a] = min++;

	return (n);
}
