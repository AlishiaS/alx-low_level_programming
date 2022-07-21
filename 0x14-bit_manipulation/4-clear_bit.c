#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @n: pointer to the integer
 * @index: the index of the bit to be set
 *
 * Return: -1 if an error occurred,
 *	1 if it worked.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (!n || index >= sizeof(*n) * 8)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}
