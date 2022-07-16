#include "main.h"
#include <stdio.h>
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
	int a;

	if (min > max)
		return (NULL);

	n = malloc(sizeof(int) * (max - min + 1));

	if (n == NULL)
		return (NULL);

<<<<<<< HEAD
<<<<<<< HEAD
	a = 0;

	while (min <= max)
	{
		n[a] = min;
		min++;
		a++;
	}
=======
	for (a = 0; a < size; a++)
		n[a] = min++;
=======
	for (a = 0; min + a <= max; a++)
		n[a] = min + 1;
>>>>>>> parent of 32d8783 (array_range)
	
>>>>>>> parent of 623b9f9 (array_range)
	return (n);
}
