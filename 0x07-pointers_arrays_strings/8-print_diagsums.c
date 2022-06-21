#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Function Prototype
 * Description -  prints the sum of the two diagonals
 * @a: matrix of integers
 * @size: size of matrix
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int i, n1 = 0, n2 = 0;

	for (i = 0; i < size; i++)
	{
		n1 += a[i];
		a += size;
	}
	a -= size;

	for (i = 0; i < size; i++)
	{
		n2 += a[i];
		a -= size;
	}
	printf("%d, %d\n", n1, n2);
}
