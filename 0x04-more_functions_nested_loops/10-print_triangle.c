#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, space, rows = size, k = 0;

	for (i = 1; i <= rows; ++i, k = 0)
	{
		for (space = 1; space <= rows - i; ++space)
		{
			printf(" ");
		}
		while (k != 2 * i - 1)
		{
			printf("# ");
			++k;
		}
		printf("\n");
	}
	return (0);
}
