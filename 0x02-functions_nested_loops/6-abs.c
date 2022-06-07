#include "main.h"
/**
 * _abs - Function prototype
 * Description: prints the absolute value of an integer
 * @n: The number to find the absolute value of
 * Return: Absolute value of an integer
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
	return (0);
}
