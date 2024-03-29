#ifndef MAIN_H
#define MAIN_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/**
 * struct printTypeStruct - structure definition of a printTypeStruct
 * @type: type
 * @printer: function to print
 */
typedef struct printTypeStruct
{
	char *type;
	void (*printer)(va_list);
} printTypeStruct;

void print_int(va_list list);
void print_float(va_list list);
void print_char(va_list list);
void print_str(va_list list);

#endif
