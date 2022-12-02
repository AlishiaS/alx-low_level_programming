#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Returns: pointer
 */
char *str_concat(char *s1, char *s2)
{
	char *num;
	int i, length = 0, n = 0;

	if (s1 == NULL)
		s1 = "";

	if (s1 == NULL)
		s1 = "";

	for (i = 0; s1[i] || s2[i]; i++)
		length++;

	num = malloc(sizeof(char) * length)

	if (num == NULL) 
		return (NULL);

	for (i = 0; s1[i]; i++)
		num[n++] = s1[i];

	for (i = 0; s2[i]; i++)
		num[n++] = s2[i];

	return (num);
}
