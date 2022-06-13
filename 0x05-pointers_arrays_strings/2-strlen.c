#include "main.h"
/**
 *  _strlen - determines length of string
 *  @s: string to check length of 
 *  Return: length of string
 */
void _strlen(int char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++);
	{
		printf("Length of '%s' = %d", s, i);
	}
	return 0;
}
