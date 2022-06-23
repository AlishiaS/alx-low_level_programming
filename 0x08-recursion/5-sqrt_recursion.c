#include "main.h"
/**
 * _sqrt_recursion - returns the natural sqare root of a number
 * @n: number to square
 * Return: Square root of number
 */
int _sqrt_recursion(int n)
{
	return (sqrt(n, 1));
}

/**
 * sqrt - Returns the natural sqare root of a number
 * @n: number to be sqared
 * @r: square root
 * Return: square root of number.
 */
int sqrt(int n, int r)
{
	if (r * r == n)
		return (r);
	else if (r * r < n)
		return  (square(n, r + 1));
	else
		return (-1);
}
