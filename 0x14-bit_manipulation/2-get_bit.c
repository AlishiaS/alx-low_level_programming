#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: the integer to operate on
 * @index: the index of the desired bit
 *
 * Return: returns the value of a bit at a given index,
 *	-1 if an error occured.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);
	return (1 & (n >> index));
}
