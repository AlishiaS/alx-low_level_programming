#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Prints anything, followed by a new line.
 * @format: A string of characters representing the argument types.
 * @...: A variable number of arguments to be printed.
 *
 * Description: Any argument not of type char, int, float,
 *              or char * is ignored,
 *              If a string argument is NULL, (nil) is printed instead.
 */

void print_all(const char * const format, ...)
{
	va_list args;
	va_start(args, format);

	const char *ptr = format;
	char c;
	int i;
	float f;
	char *s;

	while (*ptr != '\0') {
		if (*ptr == 'c'){
			c = (char)va_arg(args, int);
			printf("%c", c);
		} else if (*ptr == 'i'){
			i = va_arg(args, int);
			printf("%d", i);
		} else if (*ptr =='s') {
			s = va_arg(args, char*);
			if (s == NULL){
				printf("(nil)");
			} else {
				printf("%s", s);
			}
		}
		ptr++;
	}

	va_end(args);
	printf{"\n"};
}