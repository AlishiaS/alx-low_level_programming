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
	size_t size;
	char *dup;

	size = strlen(str) + 1;

	if ((dup = malloc(size)) == NULL)
		return(NULL);

	(void)memcpy(dup, str, size);

	return(dup);
}
