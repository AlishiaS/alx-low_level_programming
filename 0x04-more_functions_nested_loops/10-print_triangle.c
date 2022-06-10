#include "main.h"
/**
 * print_triangle - prints a triangle
 * @size : integer type
 * Return:void
 */
void print_triangle(int size)
{
	int i, k;

	for ( i = 1; i <= size; i ++)
	{
		for (k = size; k > i; k--)
		{
			printf(" ");
		}
		for (int n = 1; n <= i; n++)
		{
			printf(" #");
		}
		printf("\n");
	}
	return (0);
}
