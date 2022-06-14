#include "main.h"
#include <stdio.h>
/**
 * rev_string - reverses a string
 * rev_string - reverses a string
 * Return: void
 */
void rev_string(char *s)
{
	int i;
	int lenth;
	int half;
	char temp;

	for (length = 0; s[length] != '\0'; length++)

		i = 0;
		
		half = length / 2;

		while (half--)
		{
			temp = s[length - i - 1];
			s[length - i - 1] = s[i];
			s[i] = temp;
			i++;
		}
}
