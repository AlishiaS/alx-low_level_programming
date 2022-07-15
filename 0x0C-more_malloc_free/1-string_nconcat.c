#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *string_nconcat - concatenates two strings
 * @s1: String 1
 * @s2: string 2
 * @n: unsigned int
 * Return:  pointer to a newly allocated space in memory,
 *	NULL - if function fails.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *cat;
	unsigned int length = n, i;

	if (s1 = NULL)
		s1 = "";
	if (s2 = NULL)
		s2 = "";

	for (i = 0; s1[i]; i++)
		length++;

	cat = malloc(sizeof(char) * (length + 1));

	if (cat == NULL)
		return (NULL);

	length = 0;

	for (i = 0; s1[i]; i++)
		cat[length++] = s1[i];

	for (i = 0; s2[i] && i < n; i++)
		cat[length++] = s2[i];

	cat[length] = '\0';

	return (cat);
}
