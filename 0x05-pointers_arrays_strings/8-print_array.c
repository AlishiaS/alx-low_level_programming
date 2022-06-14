#include "main.h"
#include <stdio.h>
/**
 * print_array - prints n elements of an array of integers
 * @a: Array
 * @n: number of ellement in array
 * Return: void
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (n--; n >= 0; i++)
	{
		printf("%d", a[i]);

		if (n > 0)
		{
			printf(",");
		}
	}
	printf("\n");
}
