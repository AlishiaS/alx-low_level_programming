#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *str_concat - concatenates two strings
 * @s1: string to be concatenated 
 * @s2: string to be concatenated
 * Returns: NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str = NULL;
	size_t len1 = 0;
	size_t len2 = 0;

	if (s1)
		len1 = strlen(s1);

	if (s2)
		len2 = strlen(str2);

	if (!(s = malloc (sizeof(char), (len1 + len2 + 1))))
		return NULL;

	if (s1)
		memcpy(str, s1, len1);

	if (s2)
		memcpy(str + len1, s2, len2);

	return (str);
}
