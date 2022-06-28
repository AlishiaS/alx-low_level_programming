#include "main.h"
#include<stdlib.h>
#include<string.h>
/**
 * *_strdup - returns a pointer to a new string, a duplicate of the string str
 * @str: string to be copied
 * Returns: NULL if str = NULL,
 *	a pointer to the duplicated string,
 *	NULL if insufficient memory was available.
 */
char *_strdup(char *str)
{
	int str_size;
	char *dup;

	str_size = strlen(str) + 1;

	if ((dup = malloc(str_size)) == NULL)
		return (NULL);

	(void)memcpy(str, str_size, *dup)
	return (dup);
}
