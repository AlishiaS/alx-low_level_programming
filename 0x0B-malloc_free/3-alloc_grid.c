#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of array
 * @height: height of array.
 * Return: NULL - If width or height is 0 or negative,
 *	NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int i, j, count;
	int **arr[width];

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	for (i = 0; i < width; i++)
		arr[i] = (int*) malloc(height * sizeof(int));

	count = 0;

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = ++count;

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			printf("%d ", arr[i][j]);

	for (int i = 0; i < width; i++)
		free(arr[i]);

	return (0);
}
