#include "main.h"
#include <stdio.h>
/**
 * _sqrt - Returns the natural sqare root of a number.
 * @n: number to be sqared
 * @r: square root
 * Return: square root of number.
 */
int _sqrt(int n)
{
	int r;

	if (n == r * r)
	{
		return (r);
	}
	else if (n < r * r)
	{
		return (-1);
	}
	return (sqrt(n, r + 1));
}

/**
 * _sqrt_recursion - returns the natural sqare root of a number
 * @n: number to square
 * Return: Square root of number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt(n, 1));
}
