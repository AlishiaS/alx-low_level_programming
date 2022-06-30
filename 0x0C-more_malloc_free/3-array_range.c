#include "main.h"
#include<stdlib.h>
/**
 * *array_range - cretes array of integers.
 * @min: int
 * @max: int
 * Return: pointer to newly created array.
 */
int *array_range(int min, int max);
{
	int *n;
	int arr;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(int) * (man - min + 1));

	if (n == NULL)
		return (NULL);

	arr = 0;

	while (min <= max)
	{
		n[arr] = min;
		min++;
		arr++;
	}
	return (n);
}
