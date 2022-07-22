#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip..
 * @n: the first int
 * @m: the second int
 *
 * Return: number of bits that to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	n ^= m;
	m = 0;

	while (n)
	{
		m += 1 & n;
		n >>= 1;
	}
	return (m);
}
