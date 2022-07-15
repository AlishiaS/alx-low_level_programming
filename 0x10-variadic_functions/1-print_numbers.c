#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers -  prints numbers
 * @n: unsigned int
 * @...: A variable number of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(list, int));

		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
<<<<<<< HEAD
	printf("\n");

=======
>>>>>>> parent of 9aee5f6 (To be is to be the value of a variable)
	va_end(list);

	putchar('\n');
}
