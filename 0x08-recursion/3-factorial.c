#include "main.h"
/**
 * factorial - Returns factorial of a number
 * @n: number to find factorial of
 * Return: -1 if n is lower than 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
