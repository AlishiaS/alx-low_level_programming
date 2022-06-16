#include "main.h"
/**
 * reverse_array - Function Prototype
 * Description - reverses the content of an array of integers
 * @a : Pointer to an array of integers
 * @n : number of elements of array
 * Return : void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
