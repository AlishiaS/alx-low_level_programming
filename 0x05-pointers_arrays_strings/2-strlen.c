#include "main.h"
#include <stdio.h>
/**
 *  _strlen - determines length of string
 *  @s: string to check length of 
 *  Return: length of string
 */
void _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; ++i);

	printf("Length of s is %d", i);
}
