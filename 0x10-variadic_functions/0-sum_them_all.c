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
	unsigned int i, sum = 0;

<<<<<<< HEAD
	va_start (list, n);
	sum = 0;
	for (i = 0; i < n; i++)
<<<<<<< HEAD
	{
		sum += va_arg(list, int);
	}
=======
	va_start(list, n);
	if (n != 0)
		for (i = 0; i < n; sum += va_arg(list, unsigned int), i++)
			;

>>>>>>> parent of 129684a (Beauty is variable, ugliness is constant)
	va_end(list);
=======
		sum += va_arg (list, int);
	va_end (list);
>>>>>>> parent of daffa77 (Beauty is variable, ugliness is constant)

	return (sum);
}
