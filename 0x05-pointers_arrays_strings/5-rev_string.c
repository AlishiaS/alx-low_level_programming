#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * rev_string - reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	char temp;
	int length = 0;

	while (s[length] != '\0')
	{
		length++;
	}
	printf("The length of this string is %d\n", length)

	for (int i = 0; i < (lenth -1) /2; i++)
	{
		temp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1 - i] = temp;
	}
	prinf("String is now %s, s");

	return 0;
}
