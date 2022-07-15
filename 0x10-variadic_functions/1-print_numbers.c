#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers -  prints numbers
 * @n: unsigned int
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;

	va_start(list, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(list, int));
		if (i != n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(list);
}
