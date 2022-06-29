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
	int **num, i, j;

	num = malloc(sizeof(*num) * height);

	if (width <= 0 || height <= 0 || arr == 0)
		return (NULL);

	else
	{
		for (i = 0; i < height; i++)
		{
			num[i] =  malloc((sizeof(**num) * width);
			if (num[i] == 0)
				while (i--)
					free(num[i]);
				free(num);
				return (NULL);
			

			for (j = 0; j < width; j++)
				num[i][j] = 0;
		}
	}
	return (num);
}
