#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated 
 * @s2: string to be concatenated
 * Returns: NULL on failure,
 *	a pointer to the duplicated string,
 *	NULL if insufficient memory was available. 
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len;
	char *num;

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	len = i + j + 1;

	num = malloc(sizeof(char) * len);

	if (num == 0)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		*(num + i) = *(s1 + i);
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		*(num + i + j) = *(s2 + j);
	}

	return (num);
}
