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
	char *

	int len = strlen (str) + 1;

	void *new = malloc (len);

	if (new == NULL)
		return NULL;

	return (char *) memcpy(new, str, len);
}
