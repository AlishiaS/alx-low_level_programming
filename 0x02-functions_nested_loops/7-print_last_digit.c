#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number being tested
 * Return: 0
 */
int print_last_digit(int n)
{
	 int num;

	 n = num % 10;

	 n = num;
	 while (n >= 10)
	 {
		 n = n / 10;
	 }
	 _putchar ("%d", &num);
	 return 0;
}
