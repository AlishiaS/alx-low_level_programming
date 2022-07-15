#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all -   returns the sum of all its parameters
 * @n: unsigned int
 * Return: sum of all parameters,
 *	0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i; 
	int sum;

	if (n == 0)
		return (0);

	va_start (list, n);
	sum = 0;
	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		sum += va_arg(list, int);
	}
	va_end(list);
=======
		sum += va_arg (list, int);
	va_end (list);
>>>>>>> parent of daffa77 (Beauty is variable, ugliness is constant)

	return (sum);
}
