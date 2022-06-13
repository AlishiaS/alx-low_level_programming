#include "main.h"
/**
 * swap_int - swaps the values of two integers
 * @a: pointer
 * @b: pointer
 * Return: void
 */
void swap_int(int *a, *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
