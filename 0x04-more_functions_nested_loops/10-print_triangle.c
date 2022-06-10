#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, j, rows = size;

	for (i = 1; i <= rows; ++i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("* ");
		}
		printf("\n");
	}
	return (0);
}
