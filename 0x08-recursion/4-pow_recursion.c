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
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		return (_pow_recursion(x, y / 2), 2);
	}
	else
		return (x * _pow_recursion(x, y - 1));
}
