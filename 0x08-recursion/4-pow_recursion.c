#include "main.h"
/**
 * _pow_recursion - Returns value of x raised to power of y.
 * @x: number to be raised
 * @y: power
 * Return: value of x raised to power of y.
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if
		return (x *= _pow_recursion(x, y - 1));
	else
		return (1);
}
